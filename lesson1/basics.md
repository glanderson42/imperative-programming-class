# Linux alapok
## Alap parancsok

* man <parancs>
    * ezzel a parancsal kapjuk meg a parameterul adott parancs osszefogo leirasat
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
        