#ifndef	QUICKLOOTRE_VERSION_INCLUDED
#define QUICKLOOTRE_VERSION_INCLUDED

#define MAKE_STR_HELPER(x) #x
#define MAKE_STR(x) MAKE_STR_HELPER(x)

#define QUICKLOOTRE_VERSION_MAJOR		1
#define QUICKLOOTRE_VERSION_MINOR		16
#define QUICKLOOTRE_VERSION_PATCH		4
#define QUICKLOOTRE_VERSION_BETA		0
#define QUICKLOOTRE_VERSION_VERSTRING	MAKE_STR(QUICKLOOTRE_VERSION_MAJOR) "." MAKE_STR(QUICKLOOTRE_VERSION_MINOR) "." MAKE_STR(QUICKLOOTRE_VERSION_PATCH) "." MAKE_STR(QUICKLOOTRE_VERSION_BETA)

#endif
