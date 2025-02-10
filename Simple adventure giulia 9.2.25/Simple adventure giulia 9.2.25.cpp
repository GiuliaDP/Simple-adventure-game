// Simple adventure giulia 9.2.25.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

int main()
{

		//ask the user where to go

		std::cout << "Where do you want to go now? Enter the number of the option chosen: " << std::endl;
		std::cout << "1. North - To the forest" << std::endl;
		std::cout << "2. East - To the mines" << std::endl;
		std::cout << "3. South - To the desert " << std::endl;
		std::cout << "4. West - To the city " << std::endl;

		//user's input to decide where to go

		int direction;
		std::cin >> direction;


		if (direction < 1 || direction > 4) {
			std::cout << "Invalid option" << std::endl;
		}
		else if (direction >= 1 || direction <= 4) {
			switch (direction) {
			case 1:
				std::cout << "Let's go north towards the forest" << std::endl;
				break;
			case 2:
				std::cout << "Let's go east towards the mines " << std::endl;
				break;
			case 3:
				std::cout << "Let's go south towards the desert" << std::endl;
				break;
			case 4:
				std::cout << "Let's go west towards the city " << std::endl;
				break;
			default:
				std::cout << "Going nowhere" << std::endl;
			}

			// player's attacked. List of possible actions

			std::cout << "Oh no! you've been attacked by bandits. How are you going to defend yourself ? " << std::endl;

			std::cout << "1. Fight!" << std::endl;
			std::cout << "2. Throw a smoke bomb " << std::endl;
			std::cout << "3. Try to negotiate " << std::endl;
			std::cout << "4. Flee!" << std::endl;

			int userDefence;
			std::cin >> userDefence;


			if (userDefence < 1 || userDefence > 4) {
				std::cout << "Invalid option" << std::endl;
			}
			else if (userDefence >= 1 || userDefence <= 4) {
				switch (userDefence) {
				case 1:
					std::cout << "Fight!" << std::endl;
					break;
				case 2:
					std::cout << "Throw a smoke bomb " << std::endl;
					break;
				case 3:
					std::cout << "Try to negotiate " << std::endl;
					break;
				case 4:
					std::cout << "Flee " << std::endl;
					break;
				default:
					std::cout << "The attackers have taken all the belonging. GAME OVER" << std::endl;
				}

				return 0;
			}

		}
	
}



// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
