#ifndef __QUEST__
    #define __QUEST__

    #include <string>

    #include "queststatus.hpp"

    class Quest
    {
        public:
            Quest() = delete;
            Quest(const std::string& name, const std::string& description, int unitId);
            void show() const noexcept;

        private:
            std::string _name;
            std::string _description;
            int _unitId;
            QuestStatus _status;
    };

#endif