# Linux alapok
## Alap parancsok

Terminalban hasznaljuk batran a TAB-ot, kiegesziti nekunk a parancsokat, fileneveket 😀

* man <parancs>
    * ezzel a parancsal kapjuk meg a parameterul adott parancs osszefogo leirasat
    * ha a parancs utan a --help flaget irjuk mint parameter, altalban rovidebb, lenyegretorobb osszefoglalot kapunk
* pwd
    * visszaadja az aktualis konyvtar teljes eleresi utjat
* cd <path>
    * Aktualis konytarat valtoztatja meg (Change Directory)
    * Ha a ```cd``` parancsot parameter nelkul hasznaljuk akkor az aktualis konytar a /home/<username> lesz
    * Ha a ```cd ..``` parancsot hasznaljuk feljebb lepunk egyel a konyvtar faban
* mkdir <konyvtarnev>
    * Konytar letrehozasa (make directory)
    * Ha a ```-p``` kapcsolot hasznaljuk akkor teljes strukturat tudunk letrehozni, almappakkal egyutt
      * pl: ```mkdir -p /home/user/almfa/alma```
* rm <path>
    * Allomanyok/mappak eltavolitasa (remove)
    * ```-rf``` kapcsoloval konytarstrukturat is tudunk torolni, akkor is ha nem ures
* ls <path>
    * Konyvtar strukturat jeleniti meg
    * ha nem irunk utana parametert akkor az aktualis konytarstrukturat jeleniti meg
* mv <path>
    * Fileokat, konytarakat mozgat vagy nevez at
      * pl:
        ```
        mv main.c not_main.c # atnevezi a filet
        mv source_file.c src/source_file.c # atmozgatja a filet az src mappaba
        ```
* cp
    * Fileokat tudunk vele masolni
    * ```-r``` kapcsoloval tudunk mappakat rekurzivan masolni
    * pl:
    ```
    cp pid.c kernel/ # keszit egy masolatot a pid.c filebol a kernel mappaba
    cp -r trace/ kernel/ # keszit egy masolatot a trace mapparol a kernel mappaba
    ```
* echo
    * Az utana megadott szoveget irja ki a standard outputra
    * pl:
    ```
    echo "Hello world!"
    ```
* cat 
    * A parameterul megadott file tartalmat irja ki a standard outputra
    * pl:
    ```
    cat main.c
    ```
* touch
    * Letrehoz egy ures tartomanyt a parameterul megadott neven
    * pl:
    ```
    touch main.c # letrehoz egy ures main.c nevu filet
    ```

## GCC hasznalata
### Forditas:
```
gcc main.c # ha ez sikeresen lefut (nincsen forditasi hibank a kodban) akkor kapunk egy a.out nevu futtathato filet
```
Ha a programunk tobb .c filebol all ossze akkor mindet megkell adnunk a forditonak parameterul
```
gcc main.c src/crypt.c src/gui.c # nagyvonalakban igy tudjuk 'egybeforditani' a tobb .c filebol allo programunkat
```
### Forditas flagekkel
Forditaskor tudunk kulonbozo flag-eket is megadni a forditoprogramnak amellyel megadhatjuk azt hogy milyen szinten optimalizalja a kodunkat, milyen neve legyen a futtathato allomanyunknak, vagy esetleg kulonbozo warning uzeneteket nyerhetunk ki forditasi idoben, amik a kodunk kisebb (nem szintaktikai) hibaira hivja fel a figyelmunkat.
Pelda az ```-o``` flagre
```
gcc main.c -o main.out # letrejon egy futtathato allomany main.out neven, a.out helyett
```
Pelda az ```-Ox``` flagre. Ahol az x 0-3ig tarto szam lehet, ami az optimalizacio szintjet jeloli
```
gcc main.c -O3 # 3-as, maximalis optimalizacioval forditja a kodot futtathato allomannya
```
Egyeb hasznos flagek peldaul: ```-Wall```, ```-Wextra```, ```-Werror```, ```-Winit-self```, ```-Wfloat-equal``` [stb](https://stackoverflow.com/questions/3375697/useful-gcc-flags-for-c)
### Futtatas:
A futtathato allomanyokat linuxon a './'-el futtathatjuk. Miutan sikeresen leforditottuk a kodunkat futtathato allomanyt kapunk amilyet a kovetkezo modon tudunk futtatni:
```
./a.out # elindul a programunk
```
