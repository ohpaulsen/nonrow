nonrow
======

Har ikke hat så mye tid til prosjektet pga hovedprosjekt og påske. 
Jeg har lagt mye tid i å tenke ut algorytmen for å regne ut om noen vinner:


Forklaring av algoritmen:

Men går alltid ut ifra den sist pålagte cordinatet. Ved å gjøre dette kan du spille 4 på rad på ett 8x8 brett
uten å kode om denne funksjonen. Dette gjør også at man slipper å søke igjennom hele brettet etter vinnere.

For å finne vannrette vinnere:
(x-1) + (x+1)

for å finne loddrette vinnere:
(y-1) + (y +1)

for å finne venstre ned til høyre:
((y-1) + (x-1)) + ((x+1)+(y+1))

for å finne høyre ned til venstre:
((x+1) + (y-1)) + ((x-1)+(y+1))

Jeg har også tuklet litt med ncurses, men fikke ikke tid til å implemntere dette ( Kan ses i comittloggen )
Hadde jeg hatt mere tid til overs hadde jeg lagt mer logikk i AI'en da denne er helt random akuratt nå.

Oppgaven er prøvd helt opp til 100x100 uten å feile på skalerbarhet. 

dataflytdigram:
https://docs.google.com/drawings/d/1js77f5YYiiuyqwRDRWL2w4ocJcWLy8I1lmA-rAoroQA/edit?usp=sharing

i ett senere tidspunkt ville jeg også begynt å brukt gamestate for å beholde wins, loss, draw på players. 

Ville også laget en klasse av AI, for da kunne 2 Ais, spilt mot hverandre. 


Det som desverre har dratt meg tilbake er tidspresset. Så dette får jeg heller vise bedre i prosjektoppgaven!
