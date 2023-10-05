#ifndef __DEMO3_H__
#define __DEMO3_H__

#include <iostream>

namespace demo3
{
    class BasePlayer
    {
    public:
        virtual void bfunc()
        {
            std::cout << "base func" << std::endl;
        }
    };

    class Player : public BasePlayer
    {
    private:
    public:
        Player() {}
        void bfunc() override;
    };

    void Player::bfunc() {
        std::cout << "player func" << std::endl;
    }

    void run()
    {
        BasePlayer *b_ptr = new Player;
        b_ptr->bfunc();
    }
}

#endif