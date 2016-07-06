***folder:*** https://github.com/raehik/javaChess
***commit:*** https://github.com/raehik/javaChess/commit/1780956fba56c5b979974b98b91c209d9297164e

----------------------
1780956: change package name -> javaChess
fb8eb69: initial commit: Board stores Pieces
----------------------

Plan: https://drive.draw.io/#G0B6vFckhfU81NTXJvTXJhZVBuODQ

Departed a bit from the plan because I wasn't really sure how we'd detect
piece collisions (i.e. capturing pieces), so I created a Board class and went
from there.

Current status is initialising the board & printing it out nice to show that
things exist on it. Main TODO is getting possible movements of each type of
piece sorted.
