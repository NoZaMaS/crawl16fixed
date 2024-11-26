#ifndef __included_crawl_compile_flags_h
#define __included_crawl_compile_flags_h

#define CRAWL_CFLAGS "-O0 -pipe -DUSE_TILE -DUSE_TILE_LOCAL -DUSE_SDL -DUSE_GL -DUSE_FT -pthread -D_REENTRANT -Wall -Wformat-security -Wundef -Wno-array-bounds -Wno-format-zero-length -Wmissing-declarations -Wredundant-decls -Wno-parentheses -Wwrite-strings -Wshadow -pedantic -Wuninitialized -Iutil -I. -isystem /usr/include/lua5.1 -Irltiles -isystem /usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -I/usr/include/sysprof-6 -isystem /usr/include/SDL2 -isystem /usr/include/ncursesw -DWIZARD -DASSERTS -DPROPORTIONAL_FONT=\"/usr/share/fonts/TTF/DejaVuSans.ttf\" -DMONOSPACED_FONT=\"/usr/share/fonts/TTF/DejaVuSansMono.ttf\" -D_REENTRANT -DCLUA_BINDINGS"
#define CRAWL_LDFLAGS "-rdynamic -fuse-ld=gold -O0"
#define CRAWL_HOST "x86_64-pc-linux-gnu"
#define CRAWL_ARCH "x86_64-pc-linux-gnu"

#endif

