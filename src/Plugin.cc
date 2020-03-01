
#include "Plugin.h"
#include "Ascii2.h"

namespace plugin { namespace Zeek_Ascii2Writer { Plugin plugin; } }

using namespace plugin::Zeek_Ascii2Writer;

plugin::Configuration Plugin::Configure()
	{

	AddComponent(new ::logging::Component("Ascii2", ::logging::writer::Ascii2::Instantiate));

	plugin::Configuration config;
	config.name = "Zeek::Ascii2Writer";
	config.description = "<Insert description>";
	config.version.major = 0;
	config.version.minor = 1;
	config.version.patch = 0;
	return config;
	}
