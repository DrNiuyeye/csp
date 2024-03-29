为了探索不同的音乐风格，小L不断地欣赏、学习来自其它歌手的音乐作品。在听完一首歌曲后，系统中会留下一条收听记录，每条记录都是一个字符串，包含了一首歌的歌手名、所属专辑名以及歌曲名。小L希望能够在这些记录中按歌曲名查询相应的歌手名。
输入格式：
第一行输入两个数n、m，n表示收听记录的条数，m表示查询的个数。
接下来n行，每行输入一个字符串，字符串格式为“a--b--c-c”（不包括引号），其中a为歌手名，b为所属专辑名，c为歌曲名。a、b、c均由英文字母（包括大写、小写）、数字、空格、引号（＇）以及连接符（-）构成，但不会存在相邻的两个连接符。a、b、c之间由两个相邻的连接符连接。输入保证不同歌曲的歌曲名互不相同，即每个输入字符串的“c”不同。
接下来m行，每行输入一个字符串，表示一个查询，字符串的内容是一首歌的歌曲名。
输出格式：
对每一个查询，输出一行，包含一个字符串，表示输入的歌曲名所对应的歌手名。如果收听记录中不存在该歌曲名，则输出一行“Not found！”（不输出引号）。

输入样例：
4 5
K-391--Ignite--Ignite
Robbie Williams--Sing When You're Winning--Better Man
Adam Lambert--Time for Miracles--Time for Miracles
Gentle Bones--A Day At A Time--A Day At A Time
Time for Miracles
At Least I Had You
Ignite
A Day At A Time
Booty Music
