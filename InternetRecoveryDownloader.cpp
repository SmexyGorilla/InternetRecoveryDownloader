#include <iostream>
#include <filesystem>
#include <direct.h>

using namespace std;

int main()
{
    cout << "Welcome to the Internet Recovery downloader.\nPlease choose one of the following to download:\n";
    cout << "1. Lion 10.7\n2. Mountain Lion 10.8\n3. Mavericks 10.9\n4. Yosemite 10.10\n5. El Capitan 10.11\n6. Sierra 10.12\n7. High Sierra 10.13\n8. Mojave 10.14\n9. Catalina 10.15\n10. Big Sur 11\n11. Monterey 12\n12. Ventura 13\n13. Sonoma 14\n14. Sequoia 15\nEnter number 1-14:";

    int versionNumber;
    cin >> versionNumber;

    string version;

    if (versionNumber == 1) {
        version = "macrecovery.py -b Mac-C3EC7CD22292981F -m 00000000000F0HM00 download";
    }
    else if (versionNumber == 2) {
        version = "macrecovery.py -b Mac-7DF2A3B5E5D671ED -m 00000000000F65100 download";
    }
    else if (versionNumber == 3) {
        version = "macrecovery.py -b Mac-F60DEB81FF30ACF6 -m 00000000000FNN100 download";
    }
    else if (versionNumber == 4) {
        version = "macrecovery.py -b Mac-E43C1C25D4880AD6 -m 00000000000GDVW00 download";
    }
    else if (versionNumber == 5) {
        version = "macrecovery.py -b Mac-FFE5EF870D7BA81A -m 00000000000GQRX00 download";
    }
    else if (versionNumber == 6) {
        version = "macrecovery.py -b Mac-77F17D7DA9285301 -m 00000000000J0DX00 download";
    }
    else if (versionNumber == 7) {
        version = "macrecovery.py -b Mac-BE088AF8C5EB4FA2 -m 00000000000J80300 download";
    }
    else if (versionNumber == 8) {
        version = "macrecovery.py -b Mac-7BA5B2DFE22DDD8C -m 00000000000KXPG00 download";
    }
    else if (versionNumber == 9) {
        version = "macrecovery.py -b Mac-00BE6ED71E35EB86 -m 00000000000000000 download";
    }
    else if (versionNumber == 10) {
        version = "macrecovery.py -b Mac-42FD25EABCABB274 -m 00000000000000000 download";
    }
    else if (versionNumber == 11) {
        version = "macrecovery.py -b Mac-FFE5EF870D7BA81A -m 00000000000000000 download";
    }
    else if (versionNumber == 12) {
        version = "macrecovery.py -b Mac-4B682C642B45593E -m 00000000000000000 download";
    }
    else if (versionNumber == 13) {
        version = "macrecovery.py -b Mac-226CB3C6A851A671 -m 00000000000000000 download";
    }
    else if (versionNumber == 14) {
        version = "macrecovery.py -b Mac-937A206F2EE63C01 -m 00000000000000000 download";
    }
    else {
        cout << "Your number is not valid, exiting...";
        return 1;
    }

    string path;
    cout << "Enter the folder path to store the files (please make sure this folder already exists): ";
    cin >> path;

    string newPath = path + "\\OpenCore\\Utilities\\macrecovery\\";

    string command = "powershell -Command \"Invoke-WebRequest -Uri \"https://github.com/acidanthera/OpenCorePkg/releases/download/1.0.3/OpenCore-1.0.3-RELEASE.zip\" -OutFile '" + path + "\\OpenCore.zip'\"";
    system(command.c_str());

    string command1 = "cd " + path;
    system(command1.c_str());

    string command2 = "powershell -Command \"Expand-Archive " + path + "\\OpenCore.zip" + " -DestinationPath " + path + "\\OpenCore\"";
    system(command2.c_str());

    _chdir(newPath.c_str());

    string versionStr = "py " + newPath + version;
    system(versionStr.c_str());

    _chdir(path.c_str());

    cout << "Will now launch Rufus to format your USB drive...";
    string downloadrufus = "powershell -Command \"Invoke-WebRequest -Uri \"https://github.com/pbatard/rufus/releases/download/v4.6/rufus-4.6.exe\" -OutFile '" + path + "\\rufus.exe'\"";
    system(downloadrufus.c_str());
    
    string rufuscmd = "start " + path + "rufus.exe";
    system(rufuscmd.c_str());

    cout << "\nWhat is the name of your USB drive, the one you just formatted? (e.g. D:\\): ";
    string usbdrive;
    cin >> usbdrive;

    string command3;
    command3 = "powershell -Command \"Copy-Item -Path '" + newPath + "\\com.apple.recovery.boot' -Destination '" + usbdrive + "\\com.apple.recovery.boot' -Recurse\"";
    system(command3.c_str());

    string command4;
    command4 = "del " + path + "\\OpenCore.zip";
    system(command4.c_str());

    string command5;
    command5 = "del /s /q " + path + "\\OpenCore\\";
    system(command5.c_str());

    string command6;
    command6 = "del " + path + "\\rufus.exe";

    cout << "Process completed.";
    cout << "Files are on the USB drive!";

    return 0;
}
