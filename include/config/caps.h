#ifndef GUARD_CONFIG_CAPS_H
#define GUARD_CONFIG_CAPS_H

// Level Cap Constants
#define EXP_CAP_NONE                    0 // Regular behavior, no level caps are applied
#define EXP_CAP_HARD                    1 // Pokémon with a level >= the level cap cannot gain any experience
#define EXP_CAP_SOFT                    2 // Pokémon with a level >= the level cap will gain reduced experience

#define LEVEL_CAP_NONE                  0 // No level cap, only applicable if B_EXP_CAP_TYPE is EXP_CAP_NONE
#define LEVEL_CAP_FLAG_LIST             1 // Level cap is chosen according to the first unset flag in `sLevelCapFlagMap`
#define LEVEL_CAP_VARIABLE              2 // Level cap is chosen according to the contents of the event variable specified by B_LEVEL_CAP_VARIABLE

// Level Cap Configs
#define B_EXP_CAP_TYPE                  EXP_CAP_SOFT   // [EXP_CAP_NONE, EXP_CAP_HARD, EXP_CAP_SOFT] choose the type of level cap to apply
#define B_LEVEL_CAP_TYPE                LEVEL_CAP_FLAG_LIST // [LEVEL_CAP_NONE, LEVEL_CAP_FLAG_LIST, LEVEL_CAP_VARIABLE] choose the method to derive the level cap
#define B_LEVEL_CAP_VARIABLE            0 // event variable used to derive level cap if B_LEVEL_CAP_TYPE is set to LEVEL_CAP_VARIABLE

#define B_RARE_CANDY_CAP                FALSE // If set to true, Rare Candies can't be used to go over the level cap
#define B_LEVEL_CAP_EXP_UP              FALSE // If set to true, mons under level cap will receive more experience

// EV Cap Constants
#define EV_CAP_NONE                     0 // Regular behavior, no EV caps are applied
#define EV_CAP_FLAG_LIST                1 // EV cap is chosen according to the first unset flag in `sEVCapFlagMap`
#define EV_CAP_VARIABLE                 2 // EV cap is chosen according to the contents of the event variable specified by B_EV_CAP_VARIABLE
#define EV_CAP_NO_GAIN                  3 // No EVs can be gained

// EV Cap Configs
#define B_EV_CAP_TYPE                   EV_CAP_NONE   // [EV_CAP_NONE, EV_CAP_FLAG_LIST, EV_CAP_VARIABLE, EV_CAP_NO_GAIN] choose the type of EV cap to apply#define B_EV_CAP_VARIABLE               12 // event variable used to derive EV cap if B_EV_CAP_TYPE is set to EV_CAP_VARIABLE
#define B_EV_CAP_VARIABLE               8 // event variable used to derive EV cap if B_EV_CAP_TYPE is set to EV_CAP_VARIABLE

#define B_EV_ITEMS_CAP                  FALSE // If set to true, EV-boosting items can't be used to go over the EV cap

#endif /* GUARD_CONFIG_CAPS_H */





//     FLAG_DEFEATED_RIVAL_ROUTE103, FLAG_BADGE01_GET, FLAG_DEFEATED_RIVAL_RUSTBORO, FLAG_BADGE02_GET, 
// FLAG_DEFEATED_RIVAL_ROUTE110, FLAG_DEFEATED_WALLY_MAUVILLE, FLAG_BADGE03_GET, FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, 
// FLAG_BADGE04_GET, FLAG_BADGE05_GET, FLAG_RECEIVED_HM_FLY, FLAG_BADGE06_GET, 
// FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, FLAG_MET_RIVAL_LILYCOVE, FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, FLAG_BADGE07_GET,
// FLAG_DEFEATED_MAGMA_SPACE_CENTER, FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, FLAG_BADGE08_GET, FLAG_DEFEATED_WALLY_VICTORY_ROAD
// FLAG_DEFEATED_CHAMPION, FLAG_DEFEATED_METEOR_FALLS_STEVEN