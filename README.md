# BUAA-OJ-Index

BUAAOJ通关代码图鉴。

## 简介

欢迎参与完善图鉴。若想加入更新图鉴的工作中来，请联系图鉴持有者。

如果您发现此处登录的某道题目答案无法通过该题目，欢迎联系图鉴持有者，我们会尽快更新图鉴。

特别说明：图鉴并非学校的官方项目，仅为学生自发组织，没有老师参与。关于OJ的一切情况以官方运营为准。

OJ4th地址：https://accoding.cn

友情链接：https://github.com/GoatGirl98/Walkthrough-of-ACCoding-in-BUAA

如果您在此处的图鉴没有查阅到想要的题目答案，欢迎去GoatGirl98学长的图鉴（C++的样子）那里逛逛。

## 说明

图鉴致力于将困难问题的通关代码写得很简单，让新手也能完全看懂，因此尽可能避开了所有高级语法，凡是能用简单的语法书写的都采用了简单语法，例如大多采用C语言（C的样子）。

例如：避开了STL里的stack和queue，尽可能避开结构体里的成员函数（方法），尽可能避开vector，尽可能避开sort等等。

如果您想参考更规范的C++写法（C++的样子），不畏惧于语法的多样性，请参考前文学长的图鉴。

## 文件与格式整理

文件命名规则：开头为题号，后面任意。一般以此题的关键做法结尾。文件名中不得出现Windows系统不支持的文件名符号，例如半角的斜杠、反斜杠、星号、冒号、引号等等。

图鉴主分支的持有者喜欢Allman括号风格（俗称括号换行），缩进用Tabs，并且一个Tab等于4个空格。

## 关于fork和Pull request

如果想参与编写图鉴，可以联系图鉴持有者设为编写者。也可以fork本图鉴，在分支上修改后，发起一个到达图鉴主分支的Pull request。如果您的Pull request质量很好，图鉴持有者可能会增设您为编写者。

图鉴主分支的持有者有一定程度的强迫症，一般会对收到的代码进行验证与格式整理，会不可避免地覆盖掉提供者原本的提交。但至少，这里收到的每一份代码，都会留在历史记录中。

如果您的fork分支远远落后于图鉴主分支，可以自行开一个从主分支到达您的分支的Pull request，然后自行合并，即可跟上主分支的进度。也可以直接删除旧分支，重新创建新的fork。

## 分类、搜索与题单

由于GitHub上每个分类只能显示1000个文件，因此把代码按照1000个为一组放入分类。这些属于普通分类。

一些题目可能会采用特殊的知识点通过。比如，用到map、set、priority_queue等等。这种情形会建立分类子图鉴，在分类下有相应的README.md，有时会有题单。

通关代码（其他语言的样子）都会分到各种特殊分类中。

同一道题的一种做法只会出现在一个分类。同一道题的不同做法可能出现在不同分类。

目前的特殊分类有：

- python：限定使用python的题目。
- bound-bsearch：使用二分法在数组上查找，一般可以写为lower_bound、upper_bound或bsearch。
- FFT-complex：快速傅里叶变换题目，使用C99的complex类型通过。
- bitset：主要使用bitset。
- map：主要使用map、multimap、unordered_map或unordered_multimap。
- nth_element：主要使用nth_element。
- priority_queue：主要使用priority_queue。
- set：主要使用set、multiset、unordered_set或unordered_multiset。
- unique：主要使用unique。

以下是使用不太推荐方法的分类，题目有可能会从这些分类中移除。
- deque：主要使用deque。
- string：主要使用string，不易改写成c文件。
- vector：主要使用vector，不易改写成c文件。
- others-cpp：不属于以上任何分类的cpp文件。

由于图鉴文件命名开头为题号，可以善用GitHub自带的搜索功能，或者本地操作系统自带的搜索功能来查找文件。

### python的样子

限定使用python的题目，一般会使用python语言通过此题。于是就得到了这道题的通关代码（python的样子）。

也可以在浏览器页面上右键，点击“检查”，然后在源代码中对应select标签处，修改提交语言，从而达到突破限定的目的。

对于处于课程之中的学生，由于后台课程组可以看到提交代码，有被记0分的风险，故不建议使用修改页面的方法。对于未处于课程之中的学生，不妨大胆尝试。

图鉴一般不拒绝各种语言样子的登录，只要能通过评测机的评测，并且希望能够成体系、成系统。

如果某种语言只有单独的一道题，成为孤例，那么这种语言的过法可能会被拒绝。例如利用Java语言通过的题目（Java的样子），在未来可以考虑成体系地介绍。

现存python代码见python分类的README.md。

## 缺失题目列表

缺失题目列表是图鉴持有者这里可以观测到，而图鉴里暂缺答案的题目。持有者还在通往OJ大师（OJ master）的路上，希望未来的有朝一日能全图鉴。

其他语言通过的代码会记录在相应分类。

### 传说的题目类

大学的竞赛类题目一般较难，称为传说的题目（神兽题）。部分题目已经登录至图鉴，暂未登录图鉴的题目列在这里。

——以下是第11届程设竞赛题目——

216 填数字 217 高级战争 219 关键结点

——以上是第11届程设竞赛题目——

——以下是第12届程设竞赛题目——

539 黑白相簿 540 多米诺骨牌

542 文本替换 551 区域赛练习题 559 最小交换次数 575 勾肥大战

597 兔子抓狼 601 蚂蚁求偶

608 邋遢大王 647 无影小姐

——以上是第12届程设竞赛题目——

——以下是2017集训选拔赛题目——

800 【2017集训选拔赛】zxa and rooks 804 【2017集训选拔赛】浪哥的蛋糕 805 【2017集训选拔赛】 真*水题 806 【2017集训选拔赛】汉诺塔

807 【2017集训选拔赛】普通的阵地防守 809 【2017集训选拔赛】Bakery

811 【2017集训选拔赛】森林 819 【2017集训选拔赛】Rectangle Recognition

——以上是2017集训选拔赛题目——

——以下是第13届程设竞赛题目——

941 夜晚的街区 948 拔起树根然后出发吧！

950 方奶奶打牌 952 zzh 与宝可梦运动会 954 气球派对

956 五角星 957 [ignore]最小公倍数 959 P5 962 方奶奶的市场之旅

981 重建炮台 982 一元二次方程 987 简单的除法 993 cgxj 的设计师

1010 Yk 的美食计划 1017 Eva 的等边三角形

1022 园艺师 1023 球交 1024 士郎与凛的日常训练 1120 夜晚的街区（数据加强）

——以上是第13届程设竞赛题目——

——以下是2018集训选拔赛题目——

1305 头等奖 1306 积分计算 1310 混合饮料 1311 鸽鸽

1320 修建道路 1329 回文串

——以上是2018集训选拔赛题目——

### 幻之题目类

可能是因为图鉴持有者在某些课程中，所以能看到一些开放的题目，这些题目未必向全校开放，称为幻之题目题目（幻兽题）。部分题目已经登录至图鉴，暂未登录图鉴的题目列在这里。

——以下是2017级航空航天类程序设计题目——

1135 Tarpe酋长的小钱钱 1136 梦中转义符 1137 队列找字母 1138 有点二

1139 lucky number 1140 分数转小数 1141 圆柱体的表面积 1144 转起来吧

1145 Tarpe酋长的天国梦 1147 Tarpe酋长的阿波罗计划 1150 Terry的水仙花数

1156 预告片效应 1174 傻傻Aqi的聪明计算器

——以上是2017级航空航天类程序设计题目——

——以下是2018级信息类程序设计题目——

1427 雨桐学姐的巧克力棍 1434 番茄养兔子

1436 奥萨的倒带机 1437 奥萨送星星 1438 奥萨的坏手柄

1439 雨桐学姐分月饼 1441 芸茹的课堂测试

1447 Zyy学姐的巧克力 1448 Zyy学姐的雪 1449 我是魔鬼0

1453 劣质复读机 1454 Mogg的卡组构筑 Ⅰ 1455 Mogg的卡组构筑 Ⅱ  1457 校验码

1461 雨桐学姐爱摸鱼 1462 雨桐学姐的简单题

1464 airbust的电话号码 1465 airbust的Walkman

1467 airbust装果子 1468 窗口

1477 小番茄的九九乘法表 1480 Max套圈圈 1481 Rating之战 1490 F7

1514 login膜xsy 1516 lx的bitAnd

1528 HugeGun学姐做除法_好 1533 Hello World! 2 1559 Ausar叫你看提示

1575 Mogg的落智游戏 Ⅰ 1616 ArcheyChen的数字链 1617 Ausar的涂鸦（1） 1618 Ausar的涂鸦（2）

1642 lx的难题 1643 lx学长做乘法2 1645 宋老师的判卷机器2 1646 HugeGun学姐的方程

——以上是2018级信息类程序设计题目——

——以下是2015级软件程序设计题目——

1781 float a+b 2428 a+b demo示例

——以上是2015级软件程序设计题目——

——以下是other捕虫小队题目——

1506 向量的内积 2431 十进制转三进制

——以上是other捕虫小队题目——

——以下是2018级软件算法分析与设计题目——

2559 AlvinZH的小面包

——以上是2018级软件算法分析与设计题目——

——以下是2019级信息类程序设计基础训练题目——

2784 直角三角形 2903 算算交流电

——以上是2019级信息类程序设计基础训练题目——

### 普通题目

以下题目暂时还没登录到图鉴。

——以下是2019级航空航天大类程序设计题目——

2990 统计感染者 2991 消毒 2993 2019-nCoV

2995 配送口罩 2996 Fight against 2019-nCoV! 2997 小文搜文献

2998 龙龙与指针 2999 小明嗑瓜子 3000 在家也能学编程 3001 老铁666

3002 艾可雪戴口罩 3003 宅家期间的黑暗料理 3004 雪萌萌的围棋

3005 疫情数据统计 3006 口罩运输 3007 怎么会有那么多病毒

3008 统计康复者 3009 能和本大爷玩游戏的竟然只有你一个 3012 二极管

3013 大数 popcount 3015 AC coding 3025 新同学

3027 Easy LCM Problem 3028 简单成绩统计 3029 符号函数

3031 看日出 3327 谁是19王

3338 复习位运算 3340 爬爬爬 3341 数字点读机 3342 智能复读机

3346 djj的异或序列 3348 计算字符串匹配度 3349 split

3353 午间 3358 网瘾少年CTY 3359 jqe的数列 3362 Serein的扫雷游戏

3364 遥不可及的军训 3366 你最好在天黑前找点吃的

——以上是2019级航空航天大类程序设计题目——

——以下是2020级航空航天类程序设计题目——

4312 五子棋大师 4350 众志成城 4353 猜拳擂台

4377 cbj统计很多个班的成绩 4387 合成OJ排行榜（青春版） 4388 合成单向链表

4402 we have a city to burn 4404 寻找落单战士 4405 井字棋大师2.0

4406 地下交流 4407 共产主义 4408 加密通话 4415 选择题

——以上是2020级航空航天类程序设计题目——

——以下是2021春Python语言程序设计题目——

4360 容器盛水 4368 判断字符串是否为完整串(easy) 4369 判断字符串是否为完整串 4370 最大个数

4371 雪糕最大个数 4372 不重最长子串 4376 杨辉三角前n行

——以上是2021春Python语言程序设计题目——
