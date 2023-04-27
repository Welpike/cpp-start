#ifndef __CHARACTER__
    #define __CHARACTER__

    #include <string>
    #include "unit.hpp"

    class Character : public Unit  // heritage
    {
        using Unit::Unit;

        public:
            Character() = delete;
            Character(int id, const std::string& name, int level) noexcept;
            int getLevel() const;

        private:
            int _level;
    };
    
#endif