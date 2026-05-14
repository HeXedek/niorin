#pragma once
#include <Geode/Geode.hpp>
using namespace geode::prelude;

namespace niorin::list::safe {
    struct cheat {
        std::string name;
        std::string desc;
        std::string author;

        bool enabled = false;
        std::function<void(bool)> callback;

        int index = 0;
    };
    std::vector<cheat>& get();
    bool detect();
    void init();

    void registerCheat(const cheat& c);
}