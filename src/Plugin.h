
#ifndef BRO_PLUGIN_ZEEK_ASCII2WRITER
#define BRO_PLUGIN_ZEEK_ASCII2WRITER

#include <plugin/Plugin.h>

namespace plugin {
namespace Zeek_Ascii2Writer {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	plugin::Configuration Configure() override;
};

extern Plugin plugin;

}
}

#endif
