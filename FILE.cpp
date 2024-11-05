#include <stdio.h>
int main()
{
    float mara= 19.5;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("*******************************sgpa counter starting****************************\n\n\n");
    printf("\n");
    printf("Please Enter your marks as the programm ask for....\n");
    printf("\n");
    float eng, bio, pps_lab, pps, cf, phy, math;
    float result;
    printf("Enter marks of ''Basic Functional English and English Spoken''\n=");
    scanf("%f", &eng);
    printf("\n");
    if (eng > 79.00)
    {
        eng = 4.00;
    }
    else if (eng > 74 && eng < 80)
    {
        eng = 3.75;
    }
    else if (eng > 69 && eng < 75)
    {
        eng = 3.50;
    }
    else if (eng > 64 && eng < 70)
    {
        eng = 3.25;
    }
    else if (eng > 59 && eng < 65)
    {
        eng = 3.00;
    }
    else if (eng > 54 && eng < 60)
    {
        eng = 2.75;
    }
    else if (eng > 49 && eng < 55)
    {
        eng = 2.50;
    }
    else if (eng > 44 && eng < 50)
    {
        eng = 2.25;
    }
    else if (eng > 39 && eng < 45)
    {
        eng = 2.00;
    }
    else if (eng < 39)
    {
        eng = 0.00;
    }

    printf("Enter marks of ''Introduction to Biology and Chemistry for Computation''\n=");
    scanf("%f", &bio);
    printf("\n");
    if (bio > 79.00)
    {
        bio = 4.00;
    }
    else if (bio > 74 && bio < 80)
    {
        bio = 3.75;
    }
    else if (bio > 69 && bio < 75)
    {
        bio = 3.50;
    }
    else if (bio > 64 && bio < 70)
    {
        bio = 3.25;
    }
    else if (bio > 59 && bio < 65)
    {
        bio = 3.00;
    }
    else if (bio > 54 && bio < 60)
    {
        bio = 2.75;
    }
    else if (bio > 49 && bio < 55)
    {
        bio = 2.50;
    }
    else if (bio > 44 && bio < 50)
    {
        bio = 2.25;
    }
    else if (bio > 39 && bio < 45)
    {
        bio = 2.00;
    }
    else if (bio < 39)
    {
        bio = 0.00;
    }
    printf("Enter marks of ''Programming and Problem Solving Lab''\n=");
    scanf("%f", &pps_lab);
    printf("\n");
    if (pps_lab > 79.00)
    {
        pps_lab = 4.00;
    }
    else if (pps_lab > 74 && pps_lab < 80)
    {
        pps_lab = 3.75;
    }
    else if (pps_lab > 69 && pps_lab < 75)
    {
        pps_lab = 3.50;
    }
    else if (pps_lab > 64 && pps_lab < 70)
    {
        pps_lab = 3.25;
    }
    else if (pps_lab > 59 && pps_lab < 65)
    {
        pps_lab = 3.00;
    }
    else if (pps_lab > 54 && pps_lab < 60)
    {
        pps_lab = 2.75;
    }
    else if (pps_lab > 49 && pps_lab < 55)
    {
        pps_lab = 2.50;
    }
    else if (pps_lab > 44 && pps_lab < 50)
    {
        pps_lab = 2.25;
    }
    else if (pps_lab > 39 && pps_lab < 45)
    {
        pps_lab = 2.00;
    }
    else if (pps_lab < 39)
    {
        pps_lab = 0.00;
    }

    printf("Enter marks of ''Programming and Problem Solving''\n=");
    scanf("%f", &pps);
    printf("\n");
    if (pps > 79.00)
    {
        pps = 4.00;
    }
    else if (pps > 74 && pps < 80)
    {
        pps = 3.75;
    }
    else if (pps > 69 && pps < 75)
    {
        pps = 3.50;
    }
    else if (pps > 64 && pps < 70)
    {
        pps = 3.25;
    }
    else if (pps > 59 && pps < 65)
    {
        pps = 3.00;
    }
    else if (pps > 54 && pps < 60)
    {
        pps = 2.75;
    }
    else if (pps > 49 && pps < 55)
    {
        pps = 2.50;
    }
    else if (pps > 44 && pps < 50)
    {
        pps = 2.25;
    }
    else if (pps > 39 && pps < 45)
    {
        pps = 2.00;
    }
    else if (pps < 39)
    {
        pps = 0.00;
    }

    printf("Enter marks of ''Computer Fundamentals''\n=");
    scanf("%f", &cf);
    printf("\n");
    if (cf > 79.00)
    {
        cf = 4.00;
    }
    else if (cf > 74 && cf < 80)
    {
        cf = 3.75;
    }
    else if (cf > 69 && cf < 75)
    {
        cf = 3.50;
    }
    else if (cf > 64 && cf < 70)
    {
        cf = 3.25;
    }
    else if (cf > 59 && cf < 65)
    {
        cf = 3.00;
    }
    else if (cf > 54 && cf < 60)
    {
        cf = 2.75;
    }
    else if (cf > 49 && cf < 55)
    {
        cf = 2.50;
    }
    else if (cf > 44 && cf < 50)
    {
        cf = 2.25;
    }
    else if (cf > 39 && cf < 45)
    {
        cf = 2.00;
    }
    else if (cf < 39)
    {
        cf = 0.00;
    }

    printf("Enter marks of ''Physics-I''\n=");
    scanf("%f", &phy);
    printf("\n");
    if (phy > 79.00)
    {
        phy = 4.00;
    }
    else if (phy > 74 && phy < 80)
    {
        phy = 3.75;
    }
    else if (phy > 69 && phy < 75)
    {
        phy = 3.50;
    }
    else if (phy > 64 && phy < 70)
    {
        phy = 3.25;
    }
    else if (phy > 59 && phy < 65)
    {
        phy = 3.00;
    }
    else if (phy > 54 && phy < 60)
    {
        phy = 2.75;
    }
    else if (phy > 49 && phy < 55)
    {
        phy = 2.50;
    }
    else if (phy > 44 && phy < 50)
    {
        phy = 2.25;
    }
    else if (phy > 39 && phy < 45)
    {
        phy = 2.00;
    }
    else if (phy < 39)
    {
        phy = 0.00;
    }

    printf("Enter marks of ''Mathematics-I''\n=");
    scanf("%f", &math);
    printf("\n");

    if (math > 79.00)
    {
        math = 4.00;
    }
    else if (math > 74 && math < 80)
    {
        math = 3.75;
    }
    else if (math > 69 && math < 75)
    {
        math = 3.50;
    }
    else if (math > 64 && math < 70)
    {
        math = 3.25;
    }
    else if (math > 59 && math < 65)
    {
        math = 3.00;
    }
    else if (math > 54 && math < 60)
    {
        math = 2.75;
    }
    else if (math > 49 && math < 55)
    {
        math = 2.50;
    }
    else if (math > 44 && math < 50)
    {
        math = 2.25;
    }
    else if (math > 39 && math < 45)
    {
        math = 2.00;
    }
    else if (math < 39)
    {
        math = 0.00;
    }
    printf("\n");
    printf("\n");
    result = ((eng * 3.00) + (math * 3.00) + (pps * 3.00) + (pps_lab * 1.500) + (bio * 3.00) + (phy * 3.00) + (cf * 3.00)) /(mara);
    printf("**************************************************Your Sgpa is = %f**************************************************\n\n\n", result);
    return 0;
}
//******************************************************************************************************************************************************* */
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⣰⣿⣿⣿⡟⠁⠀⣠⣾⣿⣿⣿⣿⡿⠟⣿⣿⣿⣿⣿⡿⠿⠛⠛⠉⠉⠙⠛⠻⠿⣿⣿⣿⣿⣿⣿⣶⣤⣀⡀⠀⠀⠀⠹⣿⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⢰⣿⣿⣿⡏⠀⠀⣼⣿⣿⣿⣿⠟⠉⣠⣾⣿⠿⠛⣉⣀⣤⣤⣴⣶⣶⣶⣶⣶⣤⣀⡀⠉⠙⠻⣿⣿⣿⣿⣿⣿⣄⡀⠀⠀⠈⠛
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⣿⣿⣿⡇⠀⣼⣿⣿⣿⡿⢃⣤⣾⣿⣫⣵⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣶⣤⡤⠄
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠘⣿⣿⡇⢰⣿⣿⣿⡿⠾⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣦⠀⠀⢻⣿⣿⣿⣿⣧⡀⠀⠀⠀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⣼⣦⡘⣿⣧⡿⢻⠙⠉⠀⢀⣀⣴⣿⣿⡿⠉⠀⠀⠉⠉⠙⠻⣿⣎⢿⣿⣿⣿⣿⣧⠙⣿⣟⢿⣧⡀⠀⢻⣿⣿⣿⣿⣿⣦⡀⠀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡻⢋⣾⠚⠋⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣀⠀⠀⠀⠀⣀⣴⣾⣿⠿⡌⢿⣿⣿⣿⣿⣧⠘⢿⡄⠉⠻⣄⠀⢻⣿⣏⠛⠛⠻⢿⣄
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢰⣿⠟⠀⠀⠀⠀⠀⠀⠐⠉⠀⢹⣿⣿⣿⣤⣤⣴⣾⣿⣿⣿⠁⠀⠛⠜⣿⣿⣿⣿⣿⣧⠈⢿⡄⢠⠈⠃⠀⠻⣿⣧⡀⠀⠀⣈
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⡿⠿⠛⢻⣷⣶⣿⣿⡘⣿⣿⠹⣿⣿⠀⠈⢿⣄⢳⣤⡀⠀⠙⠛⠿⣆⠀⠘
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⣾⣿⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⢻⡿⠛⠉⠉⣀⡀⠠⠄⠀⠀⠙⠿⣇⢹⣿⡇⢻⡟⢸⡀⠈⢿⣮⣿⣿⣶⣦⣄⣀⣀⣀⣀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣫⣾⣿⡟⠀⠀⠀⠀⠀⠀⠀⢀⠟⢻⡿⠁⠀⢀⡤⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⢰⣿⣿⠈⢁⣿⡇⠀⣾⣿⣿⣿⣿⣿⣿⣿⡿⠟⣉
// ⢸⣿⣿⣿⣿⣿⣿⣿⣛⣩⠾⠿⠿⠿⢿⡕⢆⠀⠀⠀⠀⠀⠊⠀⠈⠀⣠⠔⣋⣠⣤⣄⣉⣀⡀⠀⠀⠀⠀⠀⢈⣾⣿⣿⡆⣼⣿⠇⠰⣿⣿⣿⣟⠛⢛⣉⣡⣴⣾⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⡿⣄⣧⡀⠀⢠⠀⠑⢤⠴⢋⠁⡾⢻⡿⣿⣿⣯⠛⠛⠲⠤⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⢠⠄⠈⢻⣿⣿⣆⠘⢿⣿⣿⠛⠉
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣹⣿⢿⡃⣿⣦⡀⠀⠀⠀⠀⠀⢠⠇⣿⣇⢀⣿⣿⡇⠀⠀⠀⠀⣀⣾⣿⣿⣿⣿⣿⣿⠇⠀⡀⢄⠀⠩⠻⢿⣷⡌⠻⢿⣧⠀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣗⢻⣼⣯⠄⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⡿⠃⠀⠀⠀⢠⣾⣿⣿⣿⠿⢋⣿⠟⠀⠑⠈⠀⠁⡀⠀⣼⣿⣿⣶⣤⣽⣇
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣼⣿⡥⠙⠟⠄⠀⠀⠀⠀⠀⠀⠀⠀⣉⠩⠔⠀⠀⢀⣼⠿⠟⠋⠁⠀⠀⣸⠏⠀⡀⠄⠠⠁⠌⠀⣰⣿⣿⡿⣱⣷⣿⡻
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣋⣐⣿⢯⡇⠩⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⠁⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⣤⠀⠀⢀⣾⣿⣿⣿⠳⠿⣿⣿⡿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⡇⢀⣶⣿⣿⣿⣿⣿⣶⣤⡤⠄⣠
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡆⠢⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠋⠀⠇⠘⠛⣿⣿⣿⣿⡿⢛⣩⣴⣾⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⢀⣔⠂⠈⢑⡇⠿⣿⣿⣿⣷⡘⢿⣿⣿⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡈⠁⠀⠀⠀⠉⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠐⠰⢶⡃⣔⣼⡅⢁⠜⠙⣛⣻⢿⣮⣛⣿⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⠀⠛⠿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠔⠀⠀⢀⠀⠀⣳⢻⢸⡼⡦⢁⣴⣾⣿⣿⣧⡻⣿⣿⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⠞⠁⠀⠀⠄⠀⣈⡄⡟⠛⠈⠋⠁⣿⣿⣿⣿⣿⣿⣿⣮⣻⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⢤⡀⣐⠶⠿⠟⠁⢂⣀⠤⠴⠒⠉⣁⡄⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣷⣝
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣁⡠⡐⣄⡇⢰⠂⠉⠉⢀⣀⣤⣴⣶⣿⣿⡧⠀⠀⠐⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣯⣾⣿⡘⣵⠈⡆⠰⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⢉⣽⣶⣶⣿⡿⣿⣿⣿⡇⡟⡀⡇⠀⣿⣿⣿⣿⣿⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠉
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠁⠀⠔⠛⠛⠉⠉⠁⣰⣿⣿⣿⣿⣃⣇⠠⠀⣽⣿⣿⣿⠃⠀⠀⠙⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣤⡾⠃⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⡿⠛⢻⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠿⣿⣿⣿⡿⠃⠀⠀⠀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢏⣶⣿⣿⠃⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⠁⠀⠀⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣥⡀⠀⠀⠀
// ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢏⣾⣿⣿⡏⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⠀⠀⠀⣿⣿⣿⠏      JESAN⠀      ⣴⣿⣿⣿⣷⡀
// /* al respect to my dearest one */
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ass return 0

// // int main()
// // {

// //     ass;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// /*
//     # C++ STL divided into 4 types:
//     1. Algorithms
//     2. Containers ***
//     3. Functions
//     4. Iterators ***
// */

// // ** Pairs **
// // void explainPairs()
// // {
// //     pair<int, int> p = {1, 3};
// //     cout << p.first << " " << p.second;

// //     pair<int, pair<int, int>> p = {1, {3, 4}};
// //     cout << p.first << " " << p.second.second << " " << p.second.first;

// //     pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
// //     cout << arr[1].second;
// // }

// // ** Vector **
// void explainVectors()
// {
//     // vector<int> v;
//     // v.push_back(1);
//     // v.emplace_back(2); // push_back and emplace_back works the same
//     // but generally emplace_back is faster than push_back()

//     // vector<pair<int, int>> vec;
//     // vec.push_back({1, 2});
//     // vec.emplace_back(1, 2);

//     // vector<int> v(5, 100);

//     // vector<int> v(5);

//     // vector<int> v1(5, 10);
//     // vector<int> v2(v1);

//     // iterators point to the memory address

//     // vector<int> v;
//     // v.push_back(10);
//     // v.push_back(20);
//     // v.push_back(30);
//     // v.push_back(50);

//     // vector<int>::iterator it = v.begin();
//     // it++;
//     // cout << *(it) << " ";

//     // it = it + 2;
//     // cout << *(it) << " ";

//     // vector<int>::iterator it = v.end();  // * end will not point to last elemnt
//     // it will point right after last element

//     // vector<int>::iterator it = v.rend();
//     // vector<int>::iterator it = v.rbegin();

//     // cout << v[0] << " " << v.at(0) << " ";

//     // cout << v.back() << " ";

//     // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     // {
//     //     cout << *(it) << " ";
//     // }

//     // cout << endl;

//     // for (auto it = v.begin(); it != v.end(); it++)
//     // {
//     //     cout << *(it) << " ";
//     // }

//     // cout << endl;

//     // for (auto it : v)
//     // {
//     //     cout << it << " ";
//     // }

//     // *** Deletion of vectors ***
//     // {10,20,30,50}
//     // v.erase(v.begin() + 1);

//     // v.erase(v.begin() + 1, v.begin() + 3); // [start,end)

//     // *** Insert Function ***

//     vector<int> v(2, 100);          // {100,100}
//     v.insert(v.begin(), 300);       // {300, 100, 100}
//     v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

//     vector<int> copy(2, 50);                       // {50,50}
//     v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

//     // {10,20}
//     cout << v.size(); // 2

//     //{10,20}
//     v.pop_back(); //{10}

//     // v1 --> {10,20};
//     // v2 --> {30,40};
//     // v1.swap(v2); // v1 --> {30,40}, v2 --> {10,20}

//     v.clear(); // erases the entire vector

//     cout << v.empty(); // is it empty? --> True/False

//     // for (auto it : v)
//     // {
//     //     cout << it << " ";
//     // }
// }

// void explainList()
// {
//     list<int> ls;

//     ls.push_back(2);    //{2}
//     ls.emplace_back(4); // {2,4}

//     ls.push_front(5); // {5,2,4}
//     ls.emplace_front();

//     // rest functions same as vector
//     // begin, end, rbegin, rend, clear, insert, size, swap
// }

// void explainDeque()
// {
//     deque<int> dq;
//     dq.push_back(1);     //{1}
//     dq.emplace_back(2);  //{1,2}
//     dq.push_front(4);    //{4,1,2}
//     dq.emplace_front(3); //{3,4,1,2}

//     dq.pop_back();  // {3,4,1}
//     dq.pop_front(); // {4,1}

//     dq.back();

//     dq.front();

//     // rest functions same as vector
//     // begin, end, rbegin, rend , clear, insert, size, swap
// }

// //***Stack --> LIFO (Last in First out)

// void explainStack() // O(1) --> everythig happens in constant time
// {
//     stack<int> st;
//     st.push(1);    // {1}
//     st.push(2);    // {2,1}
//     st.push(3);    // {3,2,1}
//     st.push(3);    // {3,3,2,1}
//     st.emplace(5); // {5,3,3,2,1}

//     cout << st.top(); // it gives 5 but 5 is still on the top
//                       // when st.pop() it deletes

//     st.pop();           // st looks like {3,3,2,1}
//     cout << st.top();   // 3
//     cout << st.size();  // 4
//     cout << st.empty(); // false

//     stack<int> st1, st2;
//     st1.swap(st2);
// }

// void explainQuue()
// { // similar to stack buu FIFO --> First in First Out
//   // O(1) --> all happens in constant time
//     queue<int> q;
//     q.push(1);    //{1}
//     q.push(2);    // {1,2}
//     q.emplace(4); // {1,2,4}

//     q.back() += 5;    // 9 --> here back will mean 4
//     cout << q.back(); // prints last element 9

//     // Q is {1,2,9}
//     cout << q.front(); // prints 1

//     q.pop(); // {2,9} --> deletes the front one

//     cout << q.front(); // prints 2

//     // size swap empty same as stack
// }

// /*
//     ** Priority Queue **
//     -> that has the largest value statys at the top
//     push --> O(log n)
//     top --> O(1)
//     pop --> O(log n)
// */

// void explainPQ()
// {
//     // Maximum Heap
//     priority_queue<int> pq;

//     pq.push(5);     // {5}
//     pq.push(2);     // {5,2}
//     pq.push(8);     // {8,5,2}
//     pq.emplace(10); // {10,8,5,2}

//     cout << pq.top(); // prints 10

//     pq.pop(); // {8,5,2} --> 10 poped (removed)

//     cout << pq.top(); // prints 8

//     // size, swap, empty function same as others

//     // Minimum Heap
//     priority_queue<int, vector<int>, greater<int>> pq; // -> for minimum element at the top

//     pq.push(5);     // {5}
//     pq.push(2);     // {2,5}
//     pq.push(8);     // {2,5,8}
//     pq.emplace(10); // {2,5,8,10}

//     cout << pq.top(); // prints 2
// }

// /*
//     ** Set Container **
//     -> It stores everything in the sorted order
//     -> Stores unique // *UNIQUE

// */

// void explainSet() // O(lon n)
// {
//     set<int> st;

//     st.insert(1);  // {1}
//     st.emplace(2); // {1,2}
//     st.insert(2);  // {1,2}
//     st.insert(4);  // {1,2,4}
//     st.insert(3);  // {1,2,3,4}

//     // Functionality of insert in vector
//     // can be used also, that only increases
//     // efficiency

//     // begin(), end(), rbegin(), rend(), size()
//     // empty() and swap() are same as those of above

//     // {1, 2, 3, 4, 5}
//     auto it = st.find(3); // treturs to the iterator which point to the 3

//     // {1, 2, 3, 4, 5}
//     auto it = st.find(6); // if an element is not here in the set ,
//     // it will always return st.end(); --> an iterator which point to right after the end

//     // {1,4,5}
//     st.erase(5); // erases 5 // takes logarithmic time

//     int cnt = st.count(1); // if 1 occerence it will gives 1 nor 0

//     auto it = st.find(3);
//     st.erase(it); // it takes constant time

//     // {1,2,3,4,5}
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1, it2); // after erase {1,4,5} [first, last)

//     // lower_bound() and upper_bound() function works in the same way
//     // as in vector it does

//     // This is the syntax
//     auto it = st.lower_bound(2);

//     auto it = st.upper_bound(3);
// }

// void explainMultiSet()
// {
//     // everything is same as set
//     // only stores duplicate elements also

//     multiset<int> ms;

//     ms.insert(1); // {1}
//     ms.insert(1); // {1, 1}
//     ms.insert(1); // {1, 1, 1}

//     ms.erase(1); // all 1's erased

//     int cnt = ms.count(1); // -> counts number of 1 in the multiset

//     // only a single one erased
//     ms.erase(ms.find(1));

//     ms.erase(ms.find(1), ms.find(2)); // erase(start address, end address) // errase both of them

//     // rest of all functions same as set
// }

// void explainUSet()
// {                          // unordered set
//     unordered_set<int> st; // everything is similar to set

//     // lower_bound and upper_bound function
//     // does not works, rest all functions are same
//     // as above, it does not stores in any
//     // particular order it has a better complexity  // O(1) ; blue moon happens in worst case O(N)
//     // than set in most cases, except some when collision happens
// }

// void explainMap()
// {
//     // * map stores unique keys in sorted order

//     map<int, int> mpp; // {key,value}

//     map<int, pair<int, int>> mpp; // here key is integer, value is 2 integer

//     map<pair<int, int>, int> mpp; // here key is 2 integer, value is 1 integer

//     mpp[1] = 2;
//     mpp.emplace(3, 1);
//     mpp.insert({2, 4});

//     // mpp[{2, 3}] = 10;

//     for (auto it : mpp)
//     {
//         cout << it.first << " " << it.second << endl;
//     }

//     cout << mpp[1];
//     cout << mpp[5];

//     auto it = mpp.find(3);
//     // cout << *(it).second;

//     auto it = mpp.find(5); // if 5 not there it point to nothing but mpp.end();
//                            // .end() means after the mpp

//     auto it = mpp.lower_bound(2);
//     auto it = mpp.upper_bound(3);

//     // erase(), swap(), size(), empty(), are same as above
// }

// void explainMultimap()
// {
//     // everything is same as map, only it can store multiple keys
//     // only mpp[key] can not be used here
// }

// void explainUnorderedMap()
// {
//     // unique keys but not stored
//     // same as set and unordered_Set differnce.
// }

// bool comp(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.second < p2.second)
//         return true;
//     if (p1.second > p2.second)
//         return false;
//     // they are same

//     if (p1.first > p2.first)
//         return true;
//     return false;
// }

// void explainExtra()
// {

//     sort(a, a + n); // [start,end)
//     sort(v.begin(), v.end());

//     sort(a + 2, a + 4); // we can sort a portion

//     sort(a, a + n, greater<int>); // sort in descending order

//     pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
//     // sort it according to second element
//     // if second element is same, then sort
//     // it according to first element but in decreasing

//     sort(a, a + n, comp);

//     int num = 7;
//     int cnt = __builtin_popcount(); // returns 2 , the number of set bits
//                                     // 1 1 0

//     long long num = 165786578687;
//     int cnt = __builtin_popcountll(); // if the number is long long

//     string s = "123";
//     sort(s.begin(), s.end()); // always start from sorted

//     do
//     {
//         cout << s << endl;
//     } while (next_permutation(s.begin(), s.end()));

//     int maxi = *max_element(a, a + n);
//     // without * gives max elemement address ; with * gives element

//     int mini = *min_element(a, a + n);
//     //  without * gives min elemement address ; with * gives element
// }

// int main()
// {
//     // explainPairs();
//     // explainVectors();

//     return 0;
// }

// // its enough :)
/************************************************************************************************************************************************* */
// #include <stdio.h>
// #include <stdlib.h>
// struct human
// {
//     int birth_year;
//     char name[100];
//     int age;

// } candidate_1, candidate_2;
// int main()
// {
//     printf("hi candidate !! give me your details for fun :\n");
//     printf("what is you name?\n");
//     scanf("%s", candidate_1.name);
//     printf("Bith  year : ");
//     scanf("%d", &candidate_1.birth_year);
//     printf("age  : ");
//     scanf("%d", &candidate_1.age);
//     printf("what is you name?\n");
//     scanf("%s", candidate_2.name);
//     printf("Bith  year : ");
//     scanf("%d", &candidate_2.birth_year);
//     printf("age  : ");
//     scanf("%d", &candidate_2.age);
//     printf("Details : \n %s is the name of candidate\n %d is birth year\n %d is the age\n", candidate_1.name, candidate_1.birth_year, candidate_1.age);
//     printf("Details : \n %s is the name of candidate\n %d is birth year\n %d is the age\n", candidate_2.name, candidate_2.birth_year, candidate_2.age);
//     return 0;
// }
/************************************************************************************************************************************************* */