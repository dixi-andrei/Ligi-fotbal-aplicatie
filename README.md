# Project Name: Footbal-League-DataTransfers

## Theme: Transfermarkt

### Classes:
1. **Jucator (Player):**
   - *Attributes:* Name, age, club, value.
   - *Description:* Represents a player with basic information.

2. **Stats_Jucator (PlayerStats):**
   - *Inherits from:* Jucator.
   - *Attributes:* Goals, assists.
   - *Description:* Modifies a player's value based on statistics.

3. **Transfer:**
   - *Attributes:* Source club, destination club, transfer offer.
   - *Description:* Allows a player to transfer to another club if the offer is sufficient.

4. **Club:**
   - *Attributes:* Name, maximum number of players.
   - *Description:* Represents a sports club, allowing the addition of players and coaches.

5. **Transfermarkt:**
   - *Description:* In this class, a dynamically allocated vector of player objects is implemented, adding players to their respective clubs.

### Functionalities:
- Capable of reading and retaining players within a club.
- Transfers players to other clubs if the conditions are met.
- Can modify the player's value based on their statistics.

This project simulates a sports management system, focusing on players, transfers, clubs, and their interactions. The provided classes and functionalities encapsulate key aspects of the sports domain, promoting an organized and modular structure.
