#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <random>
#include <chrono>
int money = 250;
int damage = 50;
int eDamage = 25;
int eHealth = 500;
int health = 500;
int mPEK = 75;
int score;
int enDef;
bool askiArt = true;
   //-----------------------------------------------------------------------Shop Function---------------------------------------------------------------------------------------------------------------
void shop();
void shop(){
    if(askiArt == true) {
std::cout <<"                                                 SMITH’S BLACKSMITHING SHOP\n";
std::cout <<"   =={=|=====|====-              ______                                      \n";
std::cout <<"                               /       \\                                     \n";
std::cout <<"                               |========|                  ______             \n";
std::cout <<"    _.------.___               |      O |     _______     /__I__/\\             \n";
std::cout <<"     '\      |’”                |        |    |       |    \\_____\\/              \n";
std::cout <<"      )    (                   |========|    |       |    |  I  |!               \n";
std::cout <<"     |______|                  |        |    |       |    |_____|!                \n";
    }
    while(true){
std::cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
std::cout << "What would you like to buy? Sword makes you deal more damage, MedKit gives you more health, and Axe gives you more money per enemy killed. Type 'Sword' to buy the sword, 'Medkit' for the medkit, and 'Axe' for the axe. The Sword is 125 coins, the Medkit is 250 coins, and the Axe is 200 coins. TYPE 'Leave' TO LEAVE THE SHOP!\n";
std::cout << "You have " << money << " coins.";
    std::string input;
        std::cin >> input;
//Sword Item ----------------------------------------------------------------------------------------------------------
if (input == "Sword") {
    if(money >= 125) {
        money = money - 125;
        damage = damage + (rand()% 125) + 1;
        std::cout <<"------------------------------------------------------------------------------------------------\n";
        std::cout <<"You have purchased a sword, you now have " << money << " coins, and deal " << damage << " damage. \n";
    }
    else if(money < 125) {
        std::cout << "-------------------------------------\n";
        std::cout << "You do not have enough money for this. \n";
    }
}
//Medkit Item ----------------------------------------------------------------------------------------------------------
    else if(input == "Medkit") {
      if(money >= 250){
        money = money - 250;
        health = health + 250;
        std::cout <<"--------------------------------------------------------------------------------------------\n";
        std::cout <<"You have purchased a medkit, you now have " << money << " money, and " << health << " health. \n";
      }
    else if(money < 250) {
        std::cout <<"--------------------------------------\n";
        std::cout << "You do not have enough money for this. \n";
    }
      }
//Axe Item -------------------------------------------------------------------------------------------------------------
    else if(input == "Axe") {
        if(money >= 200) {
            money = money - 200;
            mPEK = mPEK + (rand() % 75) + 1;
            std::cout <<"------------------------------------------------------------------------------------------------------------ \n";
            std::cout <<"You have purchased a Axe, you now have " << money << " money, and gain " << mPEK << " coins per enemy killed. \n";
    }
    else if(money < 200) {
        std::cout <<"--------------------------------------\n";
        std::cout << "You do not have enough money for this. \n ";
    }
    }
     if(input == "Leave") {
        break;
    }

    }
}

//----------------------------------------------------------------------DEATH FUNCTION---------------------------------------------------------------
void death() {
    score = score + (money / 10);
std::cout <<" -------------------------------------------------------------------------------------------------------------------------------------------------\n";
std::cout << "You have died. You had " << money << " money, deal a total of " << damage << " damage. You had a score of " << score << " you killed " << enDef << " enemys.\n";
if(askiArt == true) {
std::cout <<" @@@@@                                        @@@@@\n";
std::cout<<"@@@@@@@                                      @@@@@@@\n";
std::cout<<"@@@@@@@           @@@@@@@@@@@@@@@            @@@@@@@\n";
std::cout<<" @@@@@@@@       @@@@@@@@@@@@@@@@@@@        @@@@@@@@\n";
std::cout<<"     @@@@@     @@@@@@@@@@@@@@@@@@@@@     @@@@@\n";
std::cout<<"       @@@@@  @@@@@@@@@@@@@@@@@@@@@@@  @@@@@\n";
std::cout<<"         @@  @@@@@@@@@@@@@@@@@@@@@@@@@  @@\n";
std::cout<<"            @@@@@@@    @@@@@@    @@@@@@\n";
std::cout<<"            @@@@@@      @@@@      @@@@@\n";
std::cout<<"            @@@@@@      @@@@      @@@@@\n";
std::cout<<"             @@@@@@    @@@@@@    @@@@@\n";
std::cout<<"              @@@@@@@@@@@  @@@@@@@@@@\n";
std::cout<<"               @@@@@@@@@@  @@@@@@@@@\n";
std::cout<<"           @@@@  @@@@@@@@@@@@@@@@@ @@@@\n";
std::cout<<"           @@@@  @@@@ @ @ @ @ @@@@  @@@@\n";
std::cout<<"          @@@@@   @@@ @ @ @ @ @@@   @@@@@\n";
std::cout<<"        @@@@@      @@@@@@@@@@@@@      @@@@@\n";
std::cout<<"      @@@@          @@@@@@@@@@@          @@@@\n";
std::cout<<"   @@@@@              @@@@@@@              @@@@@\n";
std::cout<<"  @@@@@@@                                 @@@@@@@\n";
std::cout<<"   @@@@@                                   @@@@@\n";
std::cout<<"            __     ______  _    _               \n";
std::cout<<"            \\ \\   / / __ \| |  | |              \n";
std::cout<<"             \\ \\_/ / |  | | |  | |              \n";
std::cout<<"              \\   /| |  | | |  | | |              \n";
std::cout<<"               | | | |__| | |__| |              \n";
std::cout<<"             __|_| _\\____/_\\____/____           \n";
std::cout<<"            |  __ \\_   _|  ____|  __ \\          \n";
std::cout<<"            | |  | || | | |__  | |  | |         \n";
std::cout<<"            | |  | || | |  __| | |  | |         \n";
std::cout<<"            | |__| || |_| |____| |__| |         \n";
std::cout<< "            |_____/_____|______|_____/         \n";

}
}
//-----------------------------------------------------------------------ENEMY FUNCTION--------------------------------------------------------------------------------------------------------

void enemy() {
    eDamage = 25;
    eHealth = 500;
    std::string input;
std::cout <<"--------------------------------------------------------------------------------------------------------------------------------------------------------\n";
std::cout << "You have encountered an enemy! What would you like to do? You make attack or [I will add more options in later versions]. Type 'Attack' to attack or... \n";
std::cout <<"                                 @@                                    \n ";
std::cout <<"                              @@@@@                                     \n";
std::cout <<"                            @@@@@@@       @                             \n";
std::cout <<"                             @@@@@@      @@@                            \n";
std::cout <<"                           @ @@@@@@      @@@                            \n";
std::cout <<"                           @ @ @ @@       @@                            \n";
std::cout <<"                           @ :@@@@+      @@@                            \n";
std::cout <<"                           @  @ @ %      *@@                            \n";
std::cout <<"                          @  @ @ @      @@@                            \n ";
std::cout <<"                           @    @ @      @@*                            \n";
std::cout <<"                           @  @   @     .@@@                            \n";
std::cout <<"                   @-#@@   @@ @@@ *               @                     \n";
std::cout <<"                  @: @@@@@  @ .   @              @@                     \n";
std::cout <<"                @ @@@@@@@@@   - : =@%           @ :                     \n";
std::cout <<"              @ @@@@@      @    = @@  =        @     @@                 \n";
std::cout <<"               @@@@         @                 +       @@@               \n";
std::cout <<"              @@@@  .       * @-   @@@        #    -   @@@              \n";
std::cout <<"            + @@@       .  %   @@  @-@        :         @@       @      \n";
std::cout <<"              @@          @   @* @@    @@      @        @@     @@ @     \n";
std::cout <<"           @ @@@            @@@@@@@    @@@           .  .@    @@@ @@    \n";
std::cout <<"          + @@.        +@@@@@@@@@@@    @#   @@@@         @@  @@@ @ @@   \n";
std::cout <<"        *@         =@@# *:           @@    @@@@         @-%@@   @@ @:  \n ";
std::cout <<"       -   :#  %:@@@@@@@@                   @@@@          @@#%   @@  .  \n";
std::cout <<"              @ @@@@@@             % *                  @@@     @@@  :  \n";
std::cout <<"        @@@@@  @@@        +        @                  :*+.    - @@  :   \n";
std::cout <<"          #              @@@#@@@@@ @@  .%+#%@=      *=  =  @@#@ @@ @@   \n";
std::cout <<"         @                        @               -.         .  @=      \n";
std::cout <<"                                  @@  @          @         %  # @.      \n";
std::cout <<"                      @@          @+ #@                       + -   *   \n";
std::cout <<"                     +     +@@ .  @- @.          :       -       .  @   \n";
std::cout <<"                     *   :@@      @  #           +     =  -  -  %       \n";
std::cout <<"                    -   @@@@=     @  @                         @#- @    \n";
std::cout <<"                    +  @@@@:    % @  @                %    :  % @@ +    \n";
std::cout <<"                                  @  @                           @      \n";
std::cout <<"                      @@@@        @  @                       -  \n";


while(true) {
std::cin >> input;
 if(input == "Attack") {
int eac = rand() % 2;
      if(eac == 1) {
        eHealth = eHealth - damage;
        std::cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
        std::cout << "You successfully attack the enemy! The enemy now has " << eHealth << " health, and you have " << health << " health. Now what would you like to do? Type 'Attack' to attack or... \n";
 } else {
         health = health - eDamage;
    std::cout << "---------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "You unsuccessfully attacked the enemy, leaving you with " << health << " health, and the enemy still has " << eHealth << " health. \n";
    if(health <= 0) {
        death();
    }
 }

    if(eHealth <= 0) {
            score = score + 1;
            enDef = enDef + 1;
            money = money + mPEK;
        std::cout <<"---------------------------------------------------------------------------------------------\n";
        std::cout << "You have defeated the enemy! You now have " << health << " health, and " << money << " coins. \n";
        break;
    }
}
}
}
//-----------------------------------------LOOT FUNCTION-----------------------------------------------------------------------------------------------------------------------------
void loot() {
std::string input;
int enCh = rand() % 4;
int pMG = rand() % 250;
std::cout <<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
std::cout << "You encountered a small building with a chest inside, but beware, there could be an enemy inside! Type 'Loot' to attempt to loot it, Type 'Continue' to continue with your journey instead. \n";
std::cout << "            .:===-..                              \n";
std::cout << "          :+*#****++**+=-..                       \n";
std::cout << "        .*######**###******+++*+-:..              \n";
std::cout << "        =######*#########*+###******+++++-.       \n";
std::cout << "       =*####**#########*########*++*#%%%%#-      \n";
std::cout << "      .*#####+########**########++*#%%%%%%%*:     \n";
std::cout << "      .+*###*########*+########*+#%%%%%%%%%#=.    \n";
std::cout << "      .+**#*+*#**####+*#######++#%%%%%%%%%%%=.    \n";
std::cout << "      .+###*+*+++*###+%######+=+%%%%%%%%%###=.    \n";
std::cout << "       =*###+#+=***+=+#######==#%%%%%#######-     \n";
std::cout << "     ..-*###*##+=*++++*=-=*#+-*%%######%%%%#:     \n";
std::cout << "  .....:*###**######+**=-++=-=*#####%%%%%%##.     \n";
std::cout << "  ......+###**######+*####*--*###%%%%%%%%%#+..    \n";
std::cout << " .......:-+***######+*#####*==*#%%%%%%%%%%#-..... \n";
std::cout << " ........::-=+*#####+*#####*-=*#%%%%%%%%%%*:......\n";
std::cout << " ..........:::-=+*##**#####*-=*#%%%%%%%#*=::......\n";
std::cout << "  ............::--=++*#####*==*#%%%%#*+-:::.......\n";
std::cout << "    .............::--==*###*-=*#%%#*=-:::.........\n";
std::cout << "       .............:::-==+*==*#*+-::::...........\n";
std::cout << "        ................::-==++-::::..............\n";
std::cout << "            ....................................  \n";
while(true){
std::cin >> input;
if(input == "Loot") {
    if(enCh == 0||enCh == 1) {
            money = money + pMG;
            score = score + 1;
        std::cout <<"--------------------------------------------------------------------------------------------------\n";
        std::cout << "You successfully looted the chest and gained" <<pMG << " coins and now have " << money << " coins! \n";
    break; }
    else { enemy();
    break; }
}
else if (input == "Continue") {
    break;
}
}
}
//-------------------------------------------------------------------NPC FUNCTION----------------------------------------------------------------------------------------------------
void npc() {
 std::string input;
    std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "You have encountered a villager with a quest. 'Hello adventurer, I have a quest for you! Go down to the dungeon and fight the enemy for a rewarding sum of 200 coins!' Type 'Accept' to go on the quest, type 'Decline' to decline the quest. \n";
std::cout <<"                  .:=.                \n";
std::cout <<"                 :+-                  \n";
std::cout <<"                 +@@@@. -             \n";
std::cout <<"                #@@@@ .+.             \n";
std::cout <<"                 @@@#  #              \n";
std::cout <<"                  =@# .               \n";
std::cout <<"                  @@+  +              \n";
std::cout <<"                =@@@@%=-%.            \n";
std::cout <<"            *@@@@- %@ .*@@@@@@.       \n";
std::cout <<"          -@@@@@@@ +.-@@@@@@@*--      \n";
std::cout <<"          @@@@@@@@   @@@@@.@**  :     \n";
std::cout <<"         @@@@@@@@@  =@@@#@ --+ :*     \n";
std::cout <<"         @#@-@@@@@  %@@=@@   = @.+    \n";
std::cout <<"        *@*@+@@@@@  @@++@@   -%@ -.   \n";
std::cout <<"        @@@-@@@@@%@@@@:@@-   =@-  =   \n";
std::cout <<"        @@@+@@@-#+@@@ @@:    *%+=  :  \n";
std::cout <<"        @@@+   :*+@@-:       @@@*     \n";
std::cout <<"        @@@@.  ..:.         %@%:      \n";
std::cout <<"        @@@@#@@@--: .@#%+==@@@@+      \n";
std::cout <<"        *@# =@@@:#@@ @@#@. :%=        \n";
std::cout <<"           @@@@#.@@- @@@@%*           \n";
std::cout <<"           @@@+#.@@  @@@%+            \n";
std::cout <<"          .@@@.%+@@  @%=+             \n";
    while(true) {
        std::cin >> input;
        if(input == "Accept") {
                score = score + 1;
            enemy();
                break;
        }
        if(input == "Decline") {
            break;
        }
    }
}

//-------------------------------------------------------------------THE LESS FORTUNATE FUNCTION-------------------------------------------------------------------------------------
void tlf() {
    std::string input;
    std::cout <<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "You encounter a man sitting on the side of the trail, he clearly needs help. You can donate for a chance for him to help you on your journey, but he might attack you instead. This will cost 25 coins. Type 'Help' to aid him, type 'Ignore' to continue on your journey. \n";
std::cout <<"                          THE LESS FURTUNATE       \n";
std::cout <<"                         =%@%%%%*:                 \n";
std::cout <<"                        +@**#%%%%%-                \n";
std::cout <<"                        +@#*#%#%@@@-               \n";
std::cout <<"                         #%+*+*@@@@@=              \n";
std::cout <<"                          :%@@@@@@*+**:            \n";
std::cout <<"                           %@@@@@@*#*+*+           \n";
std::cout <<"                           %@@@@@%@#***##-         \n";
std::cout <<"                           =#@@@@@@#*##%###.       \n";
std::cout <<"                            :%@@@@%**#%%%####      \n";
std::cout <<"                          =*%@@@@*****#%%@@%%*     \n";
std::cout <<"                 ++#%#--=*#@@@%%+***#%%@@@@%#@     \n";
std::cout <<"                 #*%@@%#****+******#%@@@@##%@%=    \n";
std::cout <<"                  .+@@@%%%#**######%@@@@@%*#*%%    \n";
std::cout <<"                    *@@@@*+##%%@@@@@@@@%%%*%%*#    \n";
std::cout <<"                    .@@@@*%%@@@@@@%%%%#####%+++*   \n";
std::cout <<"                     #%@@#%%@@@@@@@@@@@#**###%%%   \n";
std::cout <<"                     -%@@*%%%%@@@@@@@@@####%@@@#   \n";
std::cout <<"                      #%@#%%%%+*%@@@@@@%%%%%@@%.   \n";
std::cout <<"                      +%%#%%%#    :=++*#%%%@@%-    \n";
std::cout <<"                      #*#%@@-                      \n";
std::cout <<"                      :@@#%%#                      \n";
std::cout <<"                      #@@@@@#                      \n";
std::cout <<"                   -*%@%@@@@*                      \n";
std::cout <<"                #%#%#%#%@@@@@                      \n";
std::cout <<"                .*###%%%#**##:                     \n";
    while(true){
            int nHC = rand() % 2;
        std::cin >> input;
        if(input == "Help") {
         if(nHC == 0) {
            money = money - 25;
            damage = damage + 55;
            score = score + 1;
            std::cout << "----------------------------------------------------------------------------------------------------------------------------------\n";
            std::cout << "The man was grateful and offered to help you on your journey, you now have " << money << " coins, and deal " << damage << " damage. \n";
            break;
         } else {
            money = money - 25;
            health = health - 75;
            std::cout <<"-------------------------------------------------------------------------------------------------------------------------------------------------\n";
            std::cout <<"When you approched the man to offer aid, he ran at you, attacked you and ran off. You now have " << health << " health, and " << money << " coins. \n";
            if(health <= 0) {
                death();
                            }
            break;
         }
        }
        else if(input == "Ignore") {
            break;
        }
    }

}
//-------------------------------------------------------------------MAIN MENU FUNCTION-----------------------------------------------------------------------------------------------------------------
void mainmenu() {
std::string  input;
std::cout << "  ______                    _   _               _______        _ _         \n";
std::cout << " |  ____|                  | | | |             |__   __|      (_) |        \n";
std::cout << " | |__ ___  _ __ __ _  ___ | |_| |_ ___ _ __      | |_ __ __ _ _| |___     \n";
std::cout << " |  __/ _ \\| '__/ _` |/ _ \\| __| __/ _ \\ '_ \\     | | '__/ _` | | / __|    \n";
std::cout << " | | | (_) | | | (_| | (_) | |_| ||  __/ | | |    | | | | (_| | | \\__ \\    \n";
std::cout << " |_|  \\___/|_|  \\__, |\\___/ \\__|\\__\\___|_| |_|    |_|_|  \\__,_|_|_|___/    \n";
std::cout << "                 __/ |                                                     \n";
std::cout << "                |___/                                                      \n";
std::cout << "Hello and Welcome to 'Forgotten Trails' A text-based adventure game by Three_BrainCell_Productions";
std::cout << "Type 'Play' to begin playing; Type 'Settings' to go to settings(settings is currently broken)";
 while(true) {
    std::cin >> input;
    if(input == "Play") {
        break;
  }
  else if(input == "Settings") {
    std::cout << "Type '1' to change Askii art settings, Type (There will be more settings in the future), Type 'Exit' to exit the settings menu";
     if(input == "1") {
        std::cout << "Type '1' To enable/disable AskiiArt";
         if(input == "1") {
            askiArt = !askiArt;
         }
     }
     else if(input == "Exit") {
        break;
     }
  }
 }
}
//---------------------------------------------------------------MAIN FUNCTION-------------------------------------------------------------------------------------------------------
int main() {
srand(time(NULL));
mainmenu();
//                      --------------------------------------------Play logic-----------------------------------------
std::cout << "You have " << money << " money, do " << damage << " damage, have " << health << " health, and gain " << mPEK << "money per enemy killed. \n";
shop();
std::vector<std::function<void()>> events = {shop, loot, npc, tlf, enemy};
    auto rng = std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count());

            while(true) {
                std::shuffle(events.begin(), events.end(), rng);
    for (const auto& event : events) {
        event();
    }
    }
}

