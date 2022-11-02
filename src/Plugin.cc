
#include "Plugin.h"

namespace plugin { namespace tutorial_plugin { Plugin plugin; } }

using namespace plugin::tutorial_plugin;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "tutorial::plugin";
	config.description = "<Insert description>";
	config.version.major = 0;
	config.version.minor = 1;
	config.version.patch = 0;
	return config;
	}
