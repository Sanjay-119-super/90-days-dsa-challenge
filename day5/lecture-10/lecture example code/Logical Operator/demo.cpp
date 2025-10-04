#include <iostream>
using namespace std;

int main() {
    int age = 20;
    int marks = 85;
    bool isRain = true;
    bool hasUmbrella = false;

    // ---------- AND (&&) ----------
    cout << "1. Age > 18 && Marks > 50 : " << (age > 18 && marks > 50) << "  (Adult with decent marks)\n";
    cout << "2. isRain && hasUmbrella : " << (isRain && hasUmbrella) << "  (Raining but safe)\n";
    cout << "3. age > 18 && age < 25 : " << (age > 18 && age < 25) << "  (Youth age check)\n";
    cout << "4. marks >= 90 && age < 18 : " << (marks >= 90 && age < 18) << "  (Teenage topper)\n";
    cout << "5. age >= 21 && hasUmbrella : " << (age >= 21 && hasUmbrella) << "  (Party age + prepared for rain)\n";
    cout << "6. marks > 40 && marks < 60 : " << (marks > 40 && marks < 60) << "  (Average performer)\n";
    cout << "7. age > 18 && !isRain : " << (age > 18 && !isRain) << "  (Adult and clear weather)\n";
    cout << "8. marks == 100 && age == 20 : " << (marks == 100 && age == 20) << "  (Perfect score at 20)\n";
    cout << "9. hasUmbrella && !isRain : " << (hasUmbrella && !isRain) << "  (Carrying umbrella for no reason)\n";
    cout << "10. age > 60 && marks > 80 : " << (age > 60 && marks > 80) << "  (Senior citizen genius)\n";

    // ---------- OR (||) ----------
    cout << "\n11. age > 18 || marks > 90 : " << (age > 18 || marks > 90) << "  (College eligibility relax)\n";
    cout << "12. isRain || hasUmbrella : " << (isRain || hasUmbrella) << "  (Need raincoat anyway)\n";
    cout << "13. marks > 90 || age < 18 : " << (marks > 90 || age < 18) << "  (Either topper or minor)\n";
    cout << "14. age < 18 || marks >= 50 : " << (age < 18 || marks >= 50) << "  (Minor OR good marks)\n";
    cout << "15. age == 21 || age == 25 : " << (age == 21 || age == 25) << "  (Special birthday)\n";
    cout << "16. marks < 35 || age > 40 : " << (marks < 35 || age > 40) << "  (Fail student or elder)\n";
    cout << "17. !isRain || hasUmbrella : " << (!isRain || hasUmbrella) << "  (Either dry or prepared)\n";
    cout << "18. age == 20 || marks == 85 : " << (age == 20 || marks == 85) << "  (Exact match found)\n";
    cout << "19. marks > 100 || marks < 0 : " << (marks > 100 || marks < 0) << "  (Impossible score check)\n";
    cout << "20. age < 10 || age > 60 : " << (age < 10 || age > 60) << "  (Child or senior)\n";

    // ---------- NOT (!) ----------
    cout << "\n21. !(age > 18) : " << (!(age > 18)) << "  (Not an adult)\n";
    cout << "22. !(marks > 50) : " << (!(marks > 50)) << "  (Not a good scorer)\n";
    cout << "23. !isRain : " << (!isRain) << "  (Weather is clear)\n";
    cout << "24. !hasUmbrella : " << (!hasUmbrella) << "  (Didn’t bring umbrella)\n";
    cout << "25. !(age == 20) : " << (!(age == 20)) << "  (Age is not 20)\n";
    cout << "26. !(marks < 35) : " << (!(marks < 35)) << "  (Not failed)\n";
    cout << "27. !(age < 18 || marks > 90) : " << (!(age < 18 || marks > 90)) << "  (Neither minor nor topper)\n";
    cout << "28. !(isRain && hasUmbrella) : " << (!(isRain && hasUmbrella)) << "  (Both conditions not true)\n";
    cout << "29. !true : " << (!true) << "  (Always false)\n";
    cout << "30. !false : " << (!false) << "  (Always true)\n";

    return 0;
}
