#pragma once

#include "Server.h"
#include "Storage.h"
#include "Journal.h"

namespace count {
    coroutine::ValueAsync<> run_service(Server &server, IStorage &storage, Journal &journal);
}