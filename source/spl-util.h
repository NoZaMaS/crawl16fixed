/**
 * @file
 * @brief data handlers for player spell list
**/

#ifndef SPL_UTIL_H
#define SPL_UTIL_H

#include "enum.h"
#include "mon-info.h"
#include <functional>

enum spschool_flag_type
{
  SPTYP_NONE           = 0,
  SPTYP_CONJURATION    = 1<<0,
  SPTYP_HEXES          = 1<<1,
  SPTYP_CHARMS         = 1<<2,
  SPTYP_FIRE           = 1<<3,
  SPTYP_ICE            = 1<<4,
  SPTYP_TRANSMUTATION  = 1<<5,
  SPTYP_NECROMANCY     = 1<<6,
  SPTYP_SUMMONING      = 1<<7,
  SPTYP_DIVINATION     = 1<<8,
  SPTYP_TRANSLOCATION  = 1<<9,
  SPTYP_POISON         = 1<<10,
  SPTYP_EARTH          = 1<<11,
  SPTYP_AIR            = 1<<12,
  SPTYP_LAST_EXPONENT  = 12,
  SPTYP_LAST_SCHOOL    = 1<<SPTYP_LAST_EXPONENT,
  SPTYP_RANDOM         = 1<<(SPTYP_LAST_EXPONENT + 1),
};
DEF_BITFIELD(spschools_type, spschool_flag_type);

struct bolt;
class dist;

enum spell_highlight_colours
{
    COL_UNKNOWN      = LIGHTGRAY,   // spells for which no known brand applies.
    COL_UNMEMORIZED  = LIGHTBLUE,   // spell hasn't been memorized (used reading spellbooks)
    COL_MEMORIZED    = LIGHTGRAY,   // spell has been memorized
    COL_USELESS      = DARKGRAY,    // ability would have no useful effect
    COL_INAPPLICABLE = COL_USELESS, // ability cannot be meanifully applied (eg, no targets)
    COL_FORBIDDEN    = LIGHTRED,    // The player's god hates this ability

    COL_EMPOWERED    = LIGHTGREEN,  // The ability is made stronger by the player's status
    COL_FAVORED      = GREEN,       // the player's god likes this ability
};

bool is_valid_spell(spell_type spell);
void init_spell_descs();
void init_spell_name_cache();
spell_type spell_by_name(string name, bool partial_match = false);

spschool_flag_type school_by_name(string name);

int get_spell_slot_by_letter(char letter);
int get_spell_letter(spell_type spell);
spell_type get_spell_by_letter(char letter);

bool add_spell_to_memory(spell_type spell);
bool del_spell_from_memory_by_slot(int slot);
bool del_spell_from_memory(spell_type spell);

int spell_hunger(spell_type which_spell, bool rod = false);
int spell_mana(spell_type which_spell);
int spell_difficulty(spell_type which_spell);
int spell_power_cap(spell_type spell);
int spell_range(spell_type spell, int pow, bool player_spell = true);
int spell_noise(spell_type spell);
int spell_effect_noise(spell_type spell);

const char *get_spell_target_prompt(spell_type which_spell);

bool spell_is_direct_explosion(spell_type spell);
bool spell_harms_target(spell_type spell);
bool spell_harms_area(spell_type spell);
int spell_levels_required(spell_type which_spell);

unsigned int get_spell_flags(spell_type which_spell);

bool spell_typematch(spell_type which_spell, spschool_flag_type which_disc);
spschools_type get_spell_disciplines(spell_type which_spell);
bool disciplines_conflict(spschools_type disc1, spschools_type disc2);
int count_bits(uint64_t bits);

template <class E>
int count_bits(enum_bitfield<E> bits)
{
    return count_bits(bits.flags);
}

const char *spell_title(spell_type which_spell);
const char* spelltype_short_name(spschool_flag_type which_spelltype);
const char* spelltype_long_name(spschool_flag_type which_spelltype);

typedef int cell_func(coord_def where, int pow, int aux, actor *agent);
typedef int monster_func(monster* mon, int pow);
typedef int cloud_func(coord_def where, int pow, int spreadrate,
                       cloud_type type, const actor* agent, int colour,
                       string name, string tile, int excl_rad);

int apply_area_visible(cell_func cf, int power, actor *agent);

int apply_monsters_around_square(monster_func mf, const coord_def& where,
                                 int power, int radius = 1);

int apply_random_around_square(cell_func cf, const coord_def& where,
                               bool hole_in_middle, int power, int max_targs,
                               actor *agent = nullptr);

void apply_area_cloud(cloud_func func, const coord_def& where,
                      int pow, int number, cloud_type ctype,
                      const actor *agent,
                      int spread_rate = -1, int colour = -1,
                      string name = "", string tile = "",
                      int excl_rad = -1);

bool spell_direction(dist &spelld, bolt &pbolt,
                      targeting_type restrict = DIR_NONE,
                      targ_mode_type mode = TARG_HOSTILE,
                      // pbolt.range if applicable, otherwise LOS_RADIUS
                      int range = 0,
                      bool needs_path = true, bool may_target_monster = true,
                      bool may_target_self = false,
                      const char *target_prefix = nullptr,
                      const char *prompt = nullptr,
                      bool cancel_at_self = false,
                      targetter *hitfunc = nullptr,
                      desc_filter get_desc_func = nullptr);

skill_type spell_type2skill(spschool_flag_type spelltype);
spschool_flag_type skill2spell_type(skill_type spell_skill);

skill_type arcane_mutation_to_skill(mutation_type mutation);
bool cannot_use_schools(spschools_type schools);

bool spell_is_form(spell_type spell) PURE;

bool spell_is_useless(spell_type spell, bool temp = true,
                      bool prevent = false, bool evoked = false) PURE;
string spell_uselessness_reason(spell_type spell, bool temp = true,
                                bool prevent = false, bool evoked = false) PURE;

int spell_highlight_by_utility(spell_type spell,
                                int default_colour = COL_UNKNOWN,
                                bool transient = false,
                                bool rod_spell = false);
bool spell_no_hostile_in_range(spell_type spell, bool rod = false);

#endif
