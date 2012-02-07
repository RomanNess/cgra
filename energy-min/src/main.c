#include <stdlib.h>
#include <stdio.h>

// Das Eingabearray muss als 24x24 Short-Array unverändert bleiben.
int signed input_array[24][24] =
{
	{-639040, -507968, -262144, 1151616, 1151552, 16384, 16448, 1179648,
	1179648, 0, -589888, 1097728, -131072, 98624, 98752, 131392,
	98752, 78400, -131584, 197184, 197824, 180992, -197312, 280064},
	
	{230528, 459968, 476672, 444224, -443904, 509568, 723136, 510272,
	690240, 428096, 624320, 642304, 756352, 805824, 806016, 608128,
	953728, -789888, -724608, 805888, -418048, -12288, 131776, 1605632},
	
	{1343488, 16448, 1088, -966720, 458752, 0, 32896, 16576,
	64, 0, 0, 0, 0, 81920, 384, 16640,
	114880, 131200, -966720, 901120, 1024, 32896, 128, 82176},
	
	{49280, -82304, -320, 0, 16384, 49280, 82176, 1088,
	541824, 101440, 328896, 1067136, 1328448, 1854592, 122944, 1083584,
	1594496, 843904, 1363200, -1874048, -1817216, -1547072, -3008, 13952},
	
	{16896, 64, 1032192, -391552, 1294080, -1126656, 1747712, -649664,
	-1439104, 603712, 31232, -492096, -534656, 1696448, 208576, -1001024,
	532992, 1451200, -891840, 585280, 1400384, 4736, 1312256, -1648768},
	
	{1047168, 286720, -491648, 1241088, -531328, 1602048, -1590848, 16320,
	-1334784, -1725632, 1625856, 1435264, -1560128, 305856, 1354304, -405504,
	-443776, -1548096, -1966592, -952000, -1730816, 248256, 415680, -1858496},
	
	{1577728, 1879488, 831360, -833984, 829120, -815360, 636288, 1145216,
	-489600, 1384320, -669760, -1711296, -644096, 872064, -1225600, 1579584,
	846400, 1487936, 1768704, 267008, -1662528, -1902336, -1267648, -602816},
	
	{829312, 2006912, 372160, -1138944, -1655296, -1997376, 675264, -1890688,
	997504, 2076288, -1255424, -1345088, 618176, -290368, 619840, 96640,
	-1675712, -683968, -1200512, 257920, -130176, -1139392, -1137152, -1742144},
	
	{681088, 134080, 793152, 1713664, -189760, 558400, 1251264, 2045120,
	-485696, 924736, -1758528, -708096, 1323328, -153984, 1659008, 1105536,
	849216, 2014080, -312640, 475136, 643648, 13312, -1788672, -507904},
	
	{-686976, -339776, -1335424, -1933888, -791872, 967552, 1673152, 2032896,
	1707712, -1516416, -432832, 1633344, -1086528, -582400, -2033920, -1132928,
	-422208, -342016, 564032, -1116672, 660736, 1027648, 644992, -128768},
	
	{1553792, 55424, -1305280, -990976, -644032, -1689088, -68160, 5056,
	-698752, 1446528, -175488, 1452800, 906304, 1831936, 366784, 1420736,
	-564160, 1378624, 169280, -979584, 965888, -1624064, 1783168, -878912},
	
	{-1971712, 111616, 1419712, -1938240, -1894592, 1858944, 1562560, -57408,
	1301440, -677696, -1666176, 1603008, 577664, 1227904, -1775936, 1278912,
	113984, -2059008, -832128, 159744, 1778752, 1123968, 1506816, -716608},
	
	{-1948416, 213696, 566080, -340928, -1560704, 1934144, 128448, 740352,
	1483712, 1653824, -1173056, -2038848, -1380288, 1494144, -221376, -1198400,
	833216, -35904, 1449216, -333184, 1695424, 1940288, 837376, 1703424},
	
	{-176320, -1200832, -742272, -2021760, -1477312, 1573376, -1841408, -1815360,
	828672, 52800, -197632, -606016, -758272, -1441344, -788480, -1899328,
	-1555264, 946048, -835776, -1153280, -1621248, 303040, -1960192, -503104},
	
	{1876608, 1076352, -382080, -1083584, 482368, 26176, 1341824, -1556736,
	-1573312, -1907328, -1868416, 629312, -467200, -743168, -2083776, -887360,
	-1233536, -234048, 306304, -1047168, -1474368, -1772544, 977920, -254080},
	
	{-982080, 159488, -432320, 1082432, -1114560, 1426624, 692800, 1207040,
	38528, -555904, 954752, 392320, -990336, -785024, -1561728, 728384,
	504064, -659648, 1026048, -820608, 151296, -746048, -476032, -857408},
	
	{-2061248, -1308160, 185408, 1770880, -437696, -1319360, -1783552, 617984,
	-1986432, -1752832, 640704, 646784, 2021568, -652288, -794368, 1751360,
	-1233728, -1919872, -463616, 1236672, 580544, -894976, -864576, 1654784},
	
	{1351552, -493632, 606592, 729792, -1050816, -755392, -1840576, 1323456,
	1073408, 1348352, -1241600, -1415424, -1241344, -902976, -1822656, 959872,
	-2051776, 1680832, -1293184, -874496, -342528, -654144, 1170048, -743296},
	
	{-1190784, -875136, 1894016, 988096, 1697216, 1728384, 883776, 699200,
	304192, 1149888, 1044160, 1312768, 134912, -1142272, -606080, 1491392,
	1461952, 210944, 860928, 1265408, 1385216, -724480, -168512, 2008832},
	
	{-1105216, 1270528, 1484736, -1634752, -528640, -1097024, 666752, -307584,
	862208, 1920640, 648064, -2065088, 1667520, 372160, 2027456, -944960,
	895936, -1665472, -1687104, 102912, 21504, -1661568, 1298432, 1552896},
	
	{-40960, 1848832, 1147008, 1485888, 2006784, -1392192, -92544, 708864,
	-313152, -740928, 1417600, 1902400, -2088896, 1160704, -1308480, -1508672,
	1242432, -868224, -184192, 1600896, 696448, 79424, 747968, 532992},
	
	{-168960, 928768, -1758656, 113344, -1318720, 158720, -1145920, -1686016,
	660416, -1279168, -1608704, -962112, 1388288, 1498304, 533696, -902144,
	-432576, 1188224, 2046336, 51904, 2048704, 1907008, -1929280, 1609152},
	
	{354624, 545728, -1465664, 581696, -170752, 374976, -1189504, -879744,
	750272, -1483008, 632320, -1790720, 263872, 1782848, -1762048, 694656,
	1895488, -1777280, -910848, 1077440, 958528, 1554368, -1083584, -747264},
	
	{-917952, -1837120, 854336, 1406912, -1954880, 1513216, -677504, -734976,
	-1608128, -55744, -2086080, 610368, 1000576, 777152, -933760, 452608,
	-706368, -1067968, 708480, -1382912, -1121280, -1104640, -298496, -1353792}
};

// main function 
int main(void) {
	return(0);
}