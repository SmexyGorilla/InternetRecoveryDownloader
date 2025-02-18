# InternetRecoveryDownloader
A simple Windows program to download macOS Internet Recovery


# Usage:
# Step 1: Select version to download:
![image](https://github.com/user-attachments/assets/95df0399-ae94-49a9-9382-9989ab6e9e5a)
Input a number from 1-14 that corresponds to the version of macOS / OS X that you wish to download.

# Step 2: 
![image](https://github.com/user-attachments/assets/80c7a029-182f-42db-b933-c92f91308465)
Input a path to which to save the OpenCore zip, and the expanded folder that contains the com.apple.recovery.boot folder. this must be a folder which already exists!

# Step 3:
![image](https://github.com/user-attachments/assets/e7a72293-3370-4bb9-b789-4f68bb16e44a)
The program will now download OpenCore (https://github.com/acidanthera/opencorepkg/), and expand this into a folder, before downloading macOS / OS X

# Step 4:
![image](https://github.com/user-attachments/assets/0bd18fa7-f4b6-4ac4-baa1-14d48d12f1a0)
When the image has been downloaded and verified, the program will exit! Follow the path given (which will be the path you gave + \OpenCore\Utilites\macrecovery) and find the com.apple.recovery.boot folder inside

# How do I use the com.apple.recovery.boot folder?
![format-usb-rufus 43feba9e](https://github.com/user-attachments/assets/4e68ac88-0c04-4d55-b121-80a5daa80f13)
Use rufus (rufus.ie) to format the drive as non-bootable FAT32, as seen above, and then copy the com.apple.recovery.boot folder to it. This will then boot on real Macs. For Hackintoshes, simply add your EFI folder to the USB drive along with the com.apple.recovery.boot folder and boot from this. EFI file creation details available at dortania.github.io

# Credits:
Apple for macOS
Dortania/Acidanthera for OpenCore
