# Project Name: Footbal-League-DataTransfers

## Theme: Transfermarkt

### Classes:

1. **Jucator (Player):**
   - *Attributes:* Name, surname, age, club, value.
   - *Description:* Represents a player with basic information.

2. **Antrenor (Coach):**
   - *Attributes:* Name, surname, age, tactics.
   - *Description:* Represents a coach with basic information.

3. **Stats_Jucator (PlayerStats):**
   - *Inherits from:* Jucator.
   - *Attributes:* Goals, assists.
   - *Description:* Modifies a player's value based on statistics.

4. **Transfer:**
   - *Attributes:* Source club, destination club, transfer offer.
   - *Description:* Allows a player to transfer to another club if the offer is sufficient.

5. **Club:**
   - *Attributes:* Name, maximum number of players.
   - *Description:* Represents a sports club, allowing the addition of players and coaches.

6. **Liga (League):**
   - *Attributes:* Name, maximum number of clubs.
   - *Description:* Represents a sports league, allowing the addition of clubs.

7. **Kit:**
   - *Attributes:* Colors.
   - *Description:* Represents the kit colors of a sports team.

8. **TransfermarktException:**
   - *Description:* Exception handling for transfer-related errors.

### Functionalities:

- Players and coaches are created, each with specific attributes.
- Player statistics are modified, affecting their value.
- Transfer objects are created, simulating player transfers between clubs.
- Club objects are created, and players and coaches are added to them.
- League objects are created, and clubs are added to them.
- Kit colors are defined for a team.
- Exception handling for potential errors during transfers, club additions, and league additions.
- Information about clubs, players, and coaches is displayed, including their specific details and statuses.


This project simulates a sports management system, focusing on players, transfers, clubs, and their interactions. The provided classes and functionalities encapsulate key aspects of the sports domain, promoting an organized and modular structure.
