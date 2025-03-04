#pragma once

class QString;

namespace chatterino {

struct CommandContext;

}  // namespace chatterino

namespace chatterino::commands {

QString setLoggingRules(const CommandContext &ctx);

QString toggleThemeReload(const CommandContext &ctx);

}  // namespace chatterino::commands
