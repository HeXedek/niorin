#include "safe.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;
namespace niorin::list::safe {
    std::vector<cheat>& get() {
        static std::vector<cheat> instance;
        return instance;
    }

    void registerCheat(const cheat& c) {
        get().push_back(c);
    }

    void init() {
        log::info("cheats: {}",get().size());
    }
}