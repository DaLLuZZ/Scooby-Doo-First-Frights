This section contains information related to HP values in the Scooby-Doo! First Frights game.<br />
In fact, the developers of the game called it "courage". But for our convenience, we will continue to call it "HP".<br />
<br />
Everyone knows that the player can see the character's current HP in the top corner of the screen (CourageBar or CourageMeter). Unfortunately, we do not have access to the knowledge of the exact values, we can only estimate it relative to the full bar. In fact, each of the playable characters in the game has a maximum of 100 HP. This value decreases if the player takes damage, and gradually increases over time if the player has less than 100 HP and is not taking damage. You can also increase your character's current HP by picking up a purple heart. Each heart you pick up restores 25 HP. If you are playing single mode, then your AI partner always has 100 HP, this value does not change even when he takes damage. But when you change the character you control, there is also a transfer of HP values.<br />
<br />
If the value of your HP reaches zero, then you lose control of the character and also lose some snacks. After a short pause, you regain control of the character and 30 HP is restored.<br />
<br />
You can take damage from enemies and from various objects of the game world. Also, your HP value will decrease by 5 if you fall into the void. The following table contains all the objects of the game world that cause damage:<br />

Object | Damage | Image
:------: |:------:| :-----:
Lightning | 10 | ![Lightnings on E1L1](/Wiki/Images/Lightning.jpg)
WaterFlow | 2 | ![WaterFlow on E2L1](/Wiki/Images/WaterFlow.jpg)
Pendulum? | 5 | ![Object on E2L2](/Wiki/Images/Pendulum.jpg)
Press? | 5 | ![Object on E2L2](/Wili/Images/Press.jpg)

The HP value is an integer (encoded in 4 bytes). It has a constant `0x24C` offset from the base address of the player character's entity.<br />
If you are playing single mode, then you can keep track of your HP value by reading a 32-bit integer using the pointer path:<br />
```cpp
[[["Scooby.exe" + 0x24EF98] + 0x10] + 0x1E8] + 0x24C
```
