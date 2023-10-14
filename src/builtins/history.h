// Prototypes for executing builtin_history function.
#ifndef FISH_BUILTIN_HISTORY_H
#define FISH_BUILTIN_HISTORY_H

#include "../maybe.h"

class Parser; using parser_t = Parser;
class IoStreams; using io_streams_t = IoStreams;

maybe_t<int> builtin_history(parser_t &parser, io_streams_t &streams, const wchar_t **argv);
#endif
