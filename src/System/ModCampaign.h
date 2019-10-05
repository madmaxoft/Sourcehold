#pragma once

#include <boost/filesystem/path.hpp>

#include <string>
#include <vector>

namespace Sourcehold {
    namespace System {
        struct ModCampaign {
            enum Type : int32_t {
                MILITARY, ECONOMICS
            } type;
            std::string title;
            std::string author;
            std::string comment;
        };

        void LoadModCampaigns(const boost::filesystem::path& base);

        std::vector<ModCampaign> *GetMilitaryCampaigns();
        std::vector<ModCampaign> *GetEcoCampaigns();

        bool HasMilitaryModCampaigns();
        bool HasEcoModCampaigns();
    }
}
