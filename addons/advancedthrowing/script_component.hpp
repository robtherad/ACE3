#define COMPONENT advancedthrowing
#include "\z\ace\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ADVANCEDTHROWING
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ADVANCEDTHROWING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ADVANCEDTHROWING
#endif

#include "\z\ace\addons\main\script_macros.hpp"


#define THROWSTYLE_NORMAL_DIR [0, 70, 500]
#define THROWSTYLE_HIGH_DIR [0, 200, 500]
#define THROWSTYLE_HIGH_VEL 8
#define THROWSTYLE_DROP_VEL 3