#include "features.hpp"

void Features::AutoDefuse::onBombRender(PlantedC4* bomb) {
    if (CONFIGBOOL("Misc>Misc>Misc>Auto Defuse")) {
        // Could also check whether you're looking at the bomb but distance check should be good enough
        if (getDistance(Globals::localPlayer->origin(), bomb->origin()) < 75) {
            float timeRemaining = bomb->time() - Interfaces::globals->curtime;
            if (CONFIGBOOL("Misc>Misc>Misc>Latest Defuse") ? 
                timeRemaining < (Globals::localPlayer->defuser() ? 5.1f: 10.1f) : true) { // TODO: Account for ping
                shouldDefuse = true;
            }
            else {
                shouldDefuse = false;
            }
        }
        else {
            shouldDefuse = false;
        }
    }
    else {
        shouldDefuse = false;
    }
}