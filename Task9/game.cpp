#include <iostream>
#include <string>

int main()
{
    const int RECORD_SCORE = 2000;

    std::string name;
    int score;
    double hours;

    std::cout << "Vvedi imya igroka: ";
    std::cin >> name;
    std::cout << "Vvedi ochcki: ";
    std::cin >> score;
    std::cout << "Vvedi chasy igry: ";
    std::cin >> hours;

    int level = score / 1000;
    int progress = static_cast<int>((static_cast<double>(score % 1000) / 1000) * 100 + 0.5);
    long long milliseconds = static_cast<long long>(hours * 3600 * 1000);
    char rank = static_cast<char>('D' - level);
    bool isRecordBroken = (score > RECORD_SCORE);

    std::cout << "Igrok: " << name << std::endl;
    std::cout << "Ochcki: " << score << ", uroven: " << level << std::endl;
    std::cout << "Progress " << (level + 1) << ": " << progress << "%" << std::endl;
    std::cout << "Milliseconds v igre: " << milliseconds << std::endl;
    std::cout << "Rang: " << rank << std::endl;
    std::cout << "Record pobit: " << isRecordBroken << std::endl;

    return 0;
}
