# SmexyGorilla / InternetRecoveryDownloader
A simple Windows program to download macOS Internet Recovery

# Prerequisites
Python (a fairly recent one is better) 

A fairly vanilla Windows install so all the commands work properly

Visual C++ 2015-2022 runtime (https://aka.ms/vs/17/release/vc_redist.x64.exe for x64 - clicking this link downloads the .exe file to your default download location. Check in your browser settings if you are unsure) https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170 for others

## Usage:
### Step 1: Select version to download:
![image](https://github.com/user-attachments/assets/95df0399-ae94-49a9-9382-9989ab6e9e5a)
Input a number from 1-14 that corresponds to the version of macOS / OS X that you wish to download.

### Step 2: 
![image](https://github.com/user-attachments/assets/80c7a029-182f-42db-b933-c92f91308465)
Input a path to which to save the OpenCore zip, and the expanded folder that contains the com.apple.recovery.boot folder. this must be a folder which already exists!

### Step 3:
![image](https://github.com/user-attachments/assets/e7a72293-3370-4bb9-b789-4f68bb16e44a)
The program will now download OpenCore (https://github.com/acidanthera/opencorepkg/), and expand this into a folder, before downloading macOS / OS X

### Step 4:
![image](https://github.com/user-attachments/assets/b52a2cc0-3d12-4b28-a230-478755016019)

The program should now launch Rufus. This is a program for formatting drives, available at https://rufus.ie/. 
Select your device in the drop down menu and configure ntil the settings in your Rufus window look exactly the same as above. 
Click start to format your USB. ALL DATA WILL BE LOST AS WITH ALL FORMATTING OPERATIONS! 
Once this has finished, close Rufus and the program will continue. 

### Step 5:

Now the program will copy and delete files. 
At the prompt, enter the path of the USB drive you just formatted. It should be D:\ or similar. Please input the full path "D:\" into the script, with the backslash, or it will fail! The program will then copy the internet recovery folder ot your USB drive and delete what is left on the hard drive, then exit.

### Step 6:
Use the USB drive. If you are wanting to make a Hackintosh, please refer to https://dortania.github.io/. If you are going to boot Internet Recovery on a real Mac ~~leave the Apple ecosystem you spaz~~, simply eject the USB from your Windows computer and boot from it on a Mac that supports the version you are booting.

## Notes:

Guaranteed compatibility for Windows 10 and 11 operating systems. No compatibility for Windows 8.1 and below guarenteed, but no reason why it wouldn't work!

Full Visual Studio 2022 compatible source is available.

No Linux and macOS support becuase ~~if you use a *nix based OS you're a stupid idiot~~ the commands for downloading would be different. Build them yourself with Visual Studio 2022 Community!

Windows SmartScreen will block these .exe files. Click 'More info' and then 'Run anyway' to run the files on your computer.

32-bit release (InternetRecoveryDownloader32.exe) runs on all x64 and x86 systems. 64-bit release (InternetRecovery64.exe) only runs on x64 systems. Use InternetRecoveryx64.exe for Snapdragon laptops running Windows ARM64. x64 emulation is good enough. if you don't know what this is, ~~get the fuck educated~~ YOU DON'T HAVE ONE! If you have doubt, use InternetRecovery32.exe
