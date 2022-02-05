#include "plugin.h"
//>
//<

using namespace plugin;
//>
int __stdcall MyCSurfaceTable__IsSprint(int) {
	return 0;
}
//<

class SprintEverywhere {
public:
    SprintEverywhere() {
        // Initialise your plugin here
        
//>
		patch::ReplaceFunction(0x55E870, MyCSurfaceTable__IsSprint);
//<
    }
//>
//<
} sprintEverywhere;

//>
//<