#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
std::string students[172] = {  //  Игровое поле
    "█████████████████████████████████████████████████\n",//0 
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█████████████████████████████████████████████████\n",//50
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█████████████████████████████████████████████████\n",//100
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█", "───────────────", "█", "───────────────", "█", "───────────────", "█\n",
    "█████████████████████████████████████████████████\n"
};
std::string fff[9] = {// Игровое поле 1 к 1 для работы с полем.
    "1","1","1",
    "1","1","1",
    "1","1","1"
};
std::string X[7] = {// Рисунок X
    "─█───────────█─",
    "──██───────██──",
    "────██───██────",
    "──────███──────",
    "────██───██────",
    "──██───────██──",
    "─█───────────█─"
};
std::string O[7] = {// Рисунок 0
    "───────────────",  // 1   +2 = 3
    "─────██████────",  // 8   +2 = 10
    "───██──────██──",  // 15  +2 = 17
    "───██──────██──",  //
    "───██──────██──",  //
    "─────██████────",  //
    "───────────────"   //
};

int carriage;


int singX(int b,char toggleX){// Масив рисования для X
    //std::int carriage;
    int number=0;
    if (fff[b] == "1"){
        fff[b] = "X";
        toggleX = 'O';


        while (number <= 6){
            students[carriage] = X[number];//carriage номер стартовой строки. (2)  //students Рисование 
            carriage = carriage + 7;
            number = number + 1; //Номер строки синвола. (0)
        };
        number = 0;
    };
    return toggleX;
};


int singO(int b, char toggleX){// Масив рисования для 0
    int number=0;
    if (fff[b] == "1"){
        fff[b] = "0";
        toggleX = 'X';


        while (number <= 6){
            students[carriage] = O[number];//carriage номер стартовой строки. (2)  //students Рисование 
            carriage = carriage + 7;
            number = number + 1; //Номер строки синвола. (0)
        };
        number = 0;
    };
    return toggleX;
}


int win_code()
{
	system("chcp 65001");
	system("cls");
	return 0;
}



int main()
{
	int IsWin;
#ifdef __linux__
	IsWin = 0;
#else 
	IsWin = 1;
	win_code();
#endif
    int a=0, b, rot, q, q1,re1, Menu, rrrrrrr; //Создание переменых.
    char ttb;
    int toggle0;
    int f, tu;
    char toggleX;
    q = 1;
    q1 = 1;

    std::string fffo[24] = {
        "0","1","2",
        // "x","x","x",
        // "1","1","1",
        // "1","1","1"
        "3","4","5",
        // "1","1","1",
        // "x","x","x",
        // "1","1","1"
        "6","7","8",
        // "1","1","1",
        // "1","1","1",
        // "x","x","x"
        "0","3","6",
        // "x","1","1",
        // "x","1","1",
        // "x","1","1"
        "1","4","7",
        // "1","x","1",
        // "1","x","1",
        // "1","x","1"
        "2","5","8",
        // "1","1","x",
        // "1","1","x",
        // "1","1","x"
        "0","4","8",
        // "x","1","1",
        // "1","x","1",
        // "1","1","x"
        "2","4","6"
        // "1","1","x",
        // "1","x","1",
        // "x","1","1"
    };




    //while (затычка >= 7){
    //    carriage = затычка;  //carriage номер стартовой строки. (2)
    //    carriage = carriage + 7;
    //    затычка = затычка + 1; //Номер строки синвола. (0)
    //};


//  -1+a
//  
//  a1 7+a2 7+a3
//  
//  2, 9, 16.
//
//



    toggleX = 'X';
    tu = '1';



    //const char* cellEmpty = "";
    while (q == 1){
        std::cout << students[a];
        a = a + 1;

        if (a == 172 ){
            int re = 0, sss1;
            std::string sss;


//
//                                                     ############################
//                                                     #  Разшифровка переменых.  #
//                                                     ############################
//                                                                  ||
//                     #########################################################################################
//                     # re  - Переменая для создание цикла который какончится когда re = 24.                  #
//                     # re1 - дубликант re, был создан чтобы откозатся от привязки к значению в переменой re. #
//                     # fff - Масив состояния поля (Где какой знак).                                          #
//                     # fffo - Масив вариантов побед.                                                         #
//                     # sss - Костыль для помешение в себя строки и еонвернтирование её в цифру.              #
//                     # sss1 - Хронит в себе значение sss но в виде int.                                      #
//                     #########################################################################################
//
//                                                  #################################
//                                                  #  Обестнение работы алгоритма  #
//                                                  #################################
//                                                                  ||
//                                                                  ||
//                                                                  ||
//                                                              ##########
//                                                              #  Ввод  #
//                                                              ##########
//                                                                  ||
//                                                                 /  \ 
//                                 /───────────────────────────────    ──────────────────────────\ 
//                                |                                                               |
//                                |                                                               |
//     ###########################################################      ###########################################################
//     #  Масив с инормации о том где на поле разположоны знаки  #      #     Масив с вариантоми побед, а именон номер мосива.    #
//     #                       \\fff//                           #      #                       \\fffo//                          #
//     #            ...   xox    xxo    oox    ...               #      #                 0,1,2  1,4,7  0,4,8                     #
//     #            ...   oox    xoo    xx0    ...               #      #            ...   xxx    -x-    x--    ...               #
//     #            ...   xx0 ,  x-- ,  0xx ,  ...               #      #            ...   ---    -x-    -x-    ...               #
//     #                                                         #      #            ...   --- ,  -x- ,  --x ,  ...               #
//     ###########################################################      ###########################################################
//                                |                                                                |
//                                 ──────────────────────────###############───────────────────────
//                                                           #  Обрободка  #                       
//                                 ──────────────────────────###############───────────────────────
//                                |                                                                |
//                                |                  ─────────0,3,6  X  0,1,2────────────          |
//                          #############           /                                    \  ##############################
//                          #    xxo    #          /                                      ───   0,1,2 ─ fffo[x(0,1,2)]   #
//                          #    xoo    #         |                                         #   x + 3                    #
//                          #    x--    #      #######────────0,3,6  X  3,4,5────────────────   3,4,5 ─ fffo[x(3,4,5)]   #
//                          #############──────#0,3,6#                                      #   .....                    #
//                          #   0,1,2   #      #######                                      #   x + 3                    #  
//                          #   3,4,5   #         |                                      ────   0,3,6 ─ fffo[x(9,10,11)] #
//                          #   6,7,8   #          \                                    /   #   .....                    #
//                          #############           ─────────0,3,6  (=)  0,3,6──────────    ##############################
//                                |                                  |                                    |
//                                |                                  |                                    |
//           ###########################                             |                      ##################################
//           #   Цикл будет проверять  #                        ###########                 # Это упрошёный вид, по факту    #
//           #     пока не найдёт      #                        #  Вывод  #                 # мы не сравниваем сразу 3       #
//           #       Совподение,       #                        ###########                 # знака, а сравнивоем по очереде #
//           # После будет проверять 0 #                             |                      #            Сночала             #
//           #     Так что довайте     #                             |                      #       0,3,6       0,1,2        #
//           # Будем проверять только  #                             |                      #             0 = 0              #
//           #       Победителя        #                             |                      #             3 X 1              #
//           ###########################                       #############                #       0,3,6       3,4,5        #
//                                                             # X Выйграл #                #             0 X 3              #
//                                                             #############                ##################################

            while (re != 24){
                re1 = re;
                sss = fffo[re1];
                int sss1 = stoi(sss);
                if (fff[sss1] == "X"){
                    re1 = re1 + 1;
                    sss = fffo[re1];
                    int sss1 = stoi(sss);
                    if (fff[sss1] == "X"){
                        re1 = re1 + 1;
                        sss = fffo[re1];
                        int sss1 = stoi(sss);
                        if (fff[sss1] == "X"){
                            std::cout << "X Выйграл!";
                            q = 0;
                        };
                    };
                };
                re = re + 3;
            };

            re = 0;
            while (re != 24){
                re1 = re;
                sss = fffo[re1];
                int sss1 = stoi(sss);
                if (fff[sss1] == "0"){
                    re1 = re1 + 1;
                    sss = fffo[re1];
                    int sss1 = stoi(sss);
                    if (fff[sss1] == "0"){
                        re1 = re1 + 1;
                        sss = fffo[re1];
                        int sss1 = stoi(sss);
                        if (fff[sss1] == "0"){
                            std::cout << "0 Выйграл!";
                            q = 0;
                        };
                    };
                };
                re = re + 3;
            };


     
            a = 0;
            // Структура очереди
            //      и ходов
            if (toggleX == 'X'){
                std::cout << "\nХодит X \n";
                std::cin >> ttb;

                if (ttb == '1'){
                    carriage = 2;
                    b = 0;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '2'){
                    carriage = 4;
                    b = 1;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '3'){
                    carriage = 6;
                    b = 2;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '4'){
                    carriage = 52;
                    b = 3;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '5'){
                    carriage = 54;
                    b = 4;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '6'){
                    carriage = 56;
                    b = 5;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '7'){
                    carriage = 102;
                    b = 6;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '8'){
                    carriage = 104;
                    b = 7;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

                if (ttb == '9'){
                    carriage = 106;
                    b = 8;
                    toggleX = singX(b, toggleX);
                    a = 0;
                };

            }else{
                std::cout << "\nХодит 0 \n";
                std::cin >> ttb;


                if (ttb == '1'){
                    carriage = 2;
                    b = 0;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '2'){
                    carriage = 4;
                    b = 1;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '3'){
                    carriage = 6;
                    b = 2;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '4'){
                    carriage = 52;
                    b = 3;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '5'){
                    carriage = 54;
                    b = 4;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '6'){
                    carriage = 56;
                    b = 5;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '7'){
                    carriage = 102;
                    b = 6;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '8'){
                    carriage = 104;
                    b = 7;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };

                if (ttb == '9'){
                    carriage = 106;
                    b = 8;
                    toggleX = singO(b, toggleX);
                    a = 0;
                };
            }
			if(IsWin){
				system("cls");
			}else{ 
				system("clear"); 
			}
        }
    }
	return 0;
}