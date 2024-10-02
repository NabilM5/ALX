THE MAZE PROJECT - MVP (A 3D Game created using SDL2)

Minimum Viable Product (MVP) Features:

	1.	Walls:
	•	Create a 2D array to represent the maze.
	•	Draw walls using the SDL2 graphics library (render as rectangles or lines).
	•	Walls should block the player’s movement when collided with.
	2.	Player Orientation:
	•	Use the arrow keys to control the player’s movement and rotation in the maze.
	•	Handle user input using SDL_Event to control the player.
	•	Update the player’s position and orientation based on user input.
	3.	Player Movement:
	•	Implement basic movement logic: forward, backward, left, and right.
	•	Ensure the movement corresponds to the player’s current orientation.
	4.	Collision Detection (Ouch):
	•	Add collision detection between the player and walls.
	•	Prevent the player from passing through walls by stopping movement upon collision.
	5.	Maze Parsing:
	•	Implement a parser to read maze data from a text file.
	•	Store the maze data in a 2D array for easy access.
	6.	Maze Rendering:
	•	Draw the maze on the screen using the maze data from the 2D array.
	•	Distinguish walls from ground and ceiling by using different colors.
	7.	Textures:
	•	Add basic textures to the walls using SDL2’s texture rendering functions.
	•	Implement functions to load and render wall textures for visual appeal.

Additional Data Modelling

User Story:

	•	As a user, I want to play a maze game that allows me to navigate through a 3D maze and complete it by reaching the end as quickly as possible.
	•	Main Menu:
	•	Players should be able to start a new game, load a saved game, or quit the game.
	•	When starting a new game, users should select the maze difficulty, including the maze size and the number of obstacles.
	•	In-Game Features:
	•	Players control a character using the arrow keys, with smooth and responsive movement.
	•	A timer counts down the time left to complete the maze, while a score reflects the player’s progress.
	•	Players should be able to collect rewards such as coins while navigating through the maze.
	•	Obstacles are placed throughout the maze to increase difficulty.
	•	End of Game:
	•	Once the player reaches the end of the maze, a message congratulates them, displays their final score, and shows the time it took to complete the maze.
	•	The player has the option to save the game for later.
	•	Sound and Music:
	•	Players want to hear sound effects tied to game actions (e.g., collecting rewards, hitting obstacles).
	•	Background music should enhance the gameplay experience.
	•	Visuals:
	•	Players expect visually appealing graphics, textures, and animations to keep them engaged throughout the game.
