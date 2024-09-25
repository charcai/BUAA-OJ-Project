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

542 文本替换 559 最小交换次数 575 勾肥大战

597 兔子抓狼 601 蚂蚁求偶

——以上是第12届程设竞赛题目——

——以下是2017集训选拔赛题目——

804 【2017集训选拔赛】浪哥的蛋糕 805 【2017集训选拔赛】 真*水题 806 【2017集训选拔赛】汉诺塔

807 【2017集训选拔赛】普通的阵地防守

——以上是2017集训选拔赛题目——

——以下是第13届程设竞赛题目——

952 zzh 与宝可梦运动会

957 [ignore]最小公倍数 962 方奶奶的市场之旅 982 一元二次方程

1022 园艺师 1023 球交 1024 士郎与凛的日常训练

——以上是第13届程设竞赛题目——

——以下是2018集训选拔赛题目——

1305 头等奖 1310 混合饮料

1320 修建道路 1329 回文串

——以上是2018集训选拔赛题目——

### 幻之题目类

可能是因为图鉴持有者在某些课程中，所以能看到一些开放的题目，这些题目未必向全校开放，称为幻之题目题目（幻兽题）。部分题目已经登录至图鉴，暂未登录图鉴的题目列在这里。

——以下是2018级信息类程序设计新生能力测试挑战赛题目——

1427 雨桐学姐的巧克力棍 1428 MountVoom的链表练习题 1434 番茄养兔子

1437 奥萨送星星 1438 奥萨的坏手柄 1439 雨桐学姐分月饼

——以上是2018级信息类程序设计新生能力测试挑战赛题目——

——以下是2018级信息类程序设计脸熟赛暨2019春节假期特别赛题目——

1448 Zyy学姐的雪 1449 我是魔鬼0

1453 劣质复读机 1454 Mogg的卡组构筑 Ⅰ 1455 Mogg的卡组构筑 Ⅱ  1457 校验码

1461 雨桐学姐爱摸鱼 1462 雨桐学姐的简单题

1464 airbust的电话号码 1465 airbust的Walkman

1467 airbust装果子 1468 窗口

——以上是2018级信息类程序设计脸熟赛暨2019春节假期特别赛题目——

——以下是2018级信息类程序设计第五次练习题目——

1480 Max套圈圈 1616 ArcheyChen的数字链 1617 Ausar的涂鸦（1） 1618 Ausar的涂鸦（2）

1642 lx的难题 1643 lx学长做乘法2 1645 宋老师的判卷机器2

——以上是2018级信息类程序设计第五次练习题目——

