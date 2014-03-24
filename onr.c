/**
 *1、输入10个整数，存放在数组中，然后逆序输出全部数组元素
 */

/*2、编写一程序使一下数组从大到小排列后输出。如：a[10]={56,37,126,10,13,20,87,15,24,40}
填空题和选择题主要考static，double，结构体，while循环，函数头选择正确的。*/


#define ARRAY_SIZE		10

/**
 * 排序 从大到小
 * @array 数组首
 * @count 数组大小
 * 无返回值
 */
static void find(int *array, const int count){
	int i = 0,
		j = 0;

	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++){
			if (a[i] < a[j]) {
			}
		}
	}
}

/**
 * 打印
 * @array 数组首
 * @count 数组大小
 */
static void print(const int *array, const int count){
	
}

int main(int argc, char *argv[]){
	int array[ARRAY_SIZE] = {0};
	int index = 0;

	for (index = ARRAY_SIZE; index >= 0; index--) {
		printf("输入 %d num = ", index + 1);
		fflush(stdout);
		scanf("%d", array + index);
	}

	find(array, ARRAY_SIZE);
	print(array, ARRAY_SIZE);

	return 0;
}


杨讯 02165975078


十件事
1.学习计算机，通过二级考试，并学习其它电脑知识。不是为了拿到证书而炫耀，而是为了以后学习其它电脑知识的便利
2.认真学习英语，顺利通过四级考试，并准备六级。不仅是为了自己以后的毕业证，更是为了多一种在必要的时候表达自己的方式和能力
3.有时间写作，写一段自传。不是为了出书，而是要让自己记住曾经有过一段经历，不要忘记自己的生活
4.有条件的话恋爱一次
5.要努力学习。不是为了通过考试，那是太容易的事。不论是否满意，既然已经进了大学，注定要在这里待四年，所以在你毕业时总要有所收获，更何况，现在学习是走出校园得到一个饭碗的唯一的资本，“知识改变命运”！
6.暑假去打工。不是为了赚钱，是要找一份与自己所学专业相近的工作，边实习，边与人交际，走出自己生活的小圈子，走进社会，获得工作经验和人际关系。“经验是金，人脉无价”
7.零元旅游。不是游玩，是要挑战！身无分文，远走他乡，靠别人帮助和自己的努力去闯荡一番，走到哪里是哪里，那是一种对自我的挑战
8.去西部，回家乡，为别人特别是为小孩做件事。这是作为一个人必须而且应该做的事！世界是美好的，“只要人人都献出一点爱”
9.为父母洗一次脚。不是报答，父母的养育之恩是报答不完的，因为你可能将来会“很忙，很忙”，没时间回家看望父母，只好现在为父母洗一次脚。准备好了行囊，让他们看望你，只是到时候别向自己的同事介绍说自己的大爷大妈。
10.痛痛快快哭一场。不是为了什么，而只是为了不知道自己为了什么！为自己经历，却是一片空白的生活，为自己逝去的青春，远去的生活
十本书
1.《成功特质--造就顶尖人士的51种品质》
2.《记住你是谁--15位哈佛教授震撼心灵的灵的人生故事》
3.《上大学为了什么》
4.《老板要你在大学里学的10件事》
5.《让兔子去跑，别教猪唱歌》
6.《善用大脑 高效学习》
7.《用好时间做对事》
8.《**与解决》
9.《10不如9大》
10.《管理学（第7版）》
十部电影
1.《阿甘正传》：执着
2.《东方不败》：才华
3.《美国往事》：人生
4.《罗马假日》：爱情
5.《勇敢的心》：勇气
6.《辛德勒的名单》：责任
7.《肖申克的救赎》：信念
8.《E.T》：童心
9.《暖春》：温暖
10.《第七封印》：哲思






 

1.《Friends》【这就不用说了，绝对是必看，9.8分】 

2.《Everybody Loves Raymond》【24分钟的家庭喜剧，老实话，不好看，不能跟Friends比，但是它是典型的美国生活英语，比Friends里的有用，7.5分】 

3.《Joey》【好笑还是很好笑的，但是没继续出下去，当然也是很不及Friends的，8.5分】 

4.《Prison Break》【基本来说，PB就是大家美剧的敲门砖，看是都要看的，第二季起看不看就无所谓了，第三季刚开始精彩的时候又被编剧罢工给搅了，9.5分】 

5.《Lost》【如果给美剧打分，那么目前为止Lost就是9.9分，为什么少了0.1分呢？因为第四季还没出，等的好难受啊】 

6.《Veronica Mars》【第一季和第二季还是可以的，校园+侦探，8.5分，第三季巨烂，所以被砍了，主角就是Heroes第二季里新出的那个放电女，叫啥来着？】 

7.《Heroes》【也不用多说了，第一季很棒，第二季是灾难，9分】 

8.《The 4400》【4400个人拥有Ability，由于比Heroes早出，所以尽管题材相近，但还是不错的，但是看到后面么，跟Heroes比比就没什么出彩的了，8分】 

9.《CSI Las Vegas》【LV是CSI系列的鼻祖，理所当然的是最好看的，现在已经出到第八季，收视率总是第一第二，非常经典，绝对要看一看，9.5分】 

10.《CSI: New York》【NY里的头绝对没有LV里的帅，节奏更慢，镜头更露骨，不是很好，8.5分】 

11.《Greys Anatony》【由于和CSI:LV是同一时间播出，所以基本上CSI收视率第二的话，第一就是GA，给它打分，同样9.9分，绝对好看，一定要看，PS：凭心讲一句，abc出的基本上都蛮好看的】 

12.《Ugly Betty》【觉得不是很好看啦，虽然无聊时还是把第二季看下去了，这个Betty和Daniel和Willie都满搓的，只有Marc和Amenda很可爱很好笑，8分】 

13.《Traveler》【第一季没出完就被砍了，收视率不佳，但是个人觉得蛮好看的，9分，真的蛮好看的，555】 

14.《Painkiller Jane》【看了一集就受不了了，可想而知把，极不推荐，不及格】 

15.《Kyle XY》【科幻剧，不好看也不难看，还好还好，8分吧】 

16.《24 hours》【看了一季，毕竟有点老套，听说第六季比较好看，7.5分】 

17.《Desperate Housewives》【的确是很作的一帮主妇，挺好看的，虽然很作，没事儿有事儿就搞几具Dead Body出来，但是还不错，8.5分】 

18.《The Sopranos》【黑道家族，看了一点点，不好看啊，而且6季了，太多】 

19.《The O.C》【现在正在看，觉得不好看，不好看，剧情满俗的，也不能怪人家，出的早嘛，7.5分】 

20.《One Tree Hill》【个人不是很喜欢这类的校园青春家庭剧，但是这一部还是不错的，演员都很养眼，剧情也很好，8分】 

21.《House》【专业性很强的医务剧，一堆专业名词都听不懂，但是第四季收视率一直很高，第三第四的，估计是我还没到火候，8.5分】 

22.《Criminal Minds》【看了一点，最新一季广受好评，但是罪案类看得太多，先歇会儿，8分】 

23.《Burn Notice》【去年夏天出的新喜剧，不错的，Miami风景很好看8.5分】 

24.《Kitchen Confidential》【厨房秘事，同样是去年暑期出的喜剧，24分钟一集，很好看，期待下一季，9.5分】 

25.《Psych》【有点傻的侦探类喜剧，无聊时可以消遣消遣，7.5分】 

26.《Hidden Palms》【棕榈泉疑云，第一季出完就被砍了，除了Palm Spring这个景点比OC好，其他没什么出彩，6.5分】 

27.《Chuck》【超市特工，今年很火的喜剧，暑假是出了两集也不知道三集，看了觉得还好，今年回归后拿到全季订单，看来还是不错的】 

28.《Standoff》【挺好看的，谈判专家，只出了一季，可以看看，9分】 

29.《Shark》【很好看的律政类美剧，拍的很有水准，但是从第二季起就不对味了，也有点看厌了，9分】 

30.《Sex And The City》【至今只看了两三集，据我一位全部看完的同学称：很好看】 

31.《Cashmere Mafia》【号称Sex And City姐妹篇，节奏感不错，刘玉玲穿的太挂三了一点，不过还是挺好看的，9分】 

32.《Dexter》【嗜血判官，仍然是罪案类，而且有点变态，看了一集，没什么兴趣了】 

33.《Gossip Girl》【只能说，是一部很养眼的剧，挺好看的，就是没什么意思，8分】 

34.《Nip Tuck》【整容室，很老的美剧了，看了5集，不好看，很不好看】 

35.《Moonlight》【第一季13集刚出完，很好看的，尽管剧情不太连贯不太成熟，但是很好看很好看，9.5分】 

36.《Dirty Sexy Money》【第一季不久前出完，有点傻，不如名字那么Fancy，8分】 

37.《Private Practice》【从Grey's Anatomy衍生出来的洛杉矶版，看了几集没有继续下去，因为种子太少下的太辛苦，但是蛮好看的，8.5分】 

38.《Bones》【识骨寻踪，罪案类，看了一集，没有继续，应该还不错】 

39.《Mad Men》【广告狂人，获得艾美奖最佳，下了一集来看，太高深了，讲的是最早那帮广告人的打拼史】 

40.《Terminator: The Sarah Connor Chronicles》【终结者外传，看了一集，不喜欢这类的科幻片，男孩子应该比较喜欢】 

41.《Masters of Science Fiction》【科幻大师，出了四集就被砍了，是根据史蒂芬·金的小说改编的，很有深度，很讽刺人类，可惜了，8.9分】 

42.《Hustle》【这是一部BBC英剧啦，飞天大盗，挺好看的，光的妈妈也喜欢看，9分】 

OK，至今成果基本上是这样，又忘记的再补吧。其实我不想再看美剧了，好浪费时间，但是现在像是吃饭喝水一样的习惯，不好看也这么看着，实在是，无语。我的推荐（排名）：《Lost迷失》、《Grey's Anatomy实习医生格蕾》、《CSI:LV犯罪现场调查：拉斯维加斯》、《Friends老友记》、《Prison Break越狱》、《Moonlight血色月光》、《Heroes英雄第一季》、《Shark律政狂鲨第一季》hellip;hellip;

 

 

1. I don't want to be the third wheel. 我不想当电灯泡.
一般的自行车都只有二个轮子, 要是有三个轮子呢? 没错, 那第三个轮子就是多余的. 所以 Third wheel 就是美语中电灯泡正确的表示方法. 还有一个**, 叫 I don't want to be the third arm. 这里不是说 “三只手”的意思, 而是和 third wheel 一样, 都是电灯泡的意思.
 
2. He is dating another girl on the side. 他同时脚踏两条船.
 
我想把这句说成 I have my feet in two boats 的人也不在少数吧! 其实正确的说法应该是像这样, He is dating another girl on the side. 或是你可以说 He is dating another girl behind her back. (这个 her 指的是他女朋友的意思)
 
On the side 这句话你去餐厅用餐时也常用到, 指的是主菜之外的副餐, 比如说 I'd like salad with dressing on the side. 就是说我要沙拉和沙拉酱. 或是 Would you like a baked potato on the side? 要不要再点一份烤马铃薯啊?
 
3. I am the one-woman kinda man. 我是那种从一而终的男人.
 
在美国从一而终的人好像不多, 他们通常从高中就开始交男女朋友, 一直交到结婚, 中间不知改朝换代过多少次. 所以这句话是很难得听到的. 其实我比较常听的是 one-man woman, 因为看来不论中外, 女生都比男生坚贞一点. kinda在口语中常用, 它是 kind of 的简写, kinda man 就是说那样的男人。可以省略不说.
 
还有一种用法叫 We are exclusive. 这个 exclusive 指的是排他的意思. 所以当一对情侣说, We are exclusive时, 就是说我们心里只有对方一人, 我们都不会再去喜欢上别人.
 
4. Those boys like to hit on me all the time. 那些男生老爱找我搭讪.
 
Hit somebody 是说你打某人的意思, 但是 hit on somebody 就不一样了, hit on somebody 是当作搭讪来解释. 常常电视剧里可以看到, 一个男的跑去跟一个陌生女孩多说了两句话, 那个女生就说: Are you hitting on me? 你现在是在跟我搭讪吗? 实在是很有意思。
 
5. That's the long distance relationship. 我和我的情人分隔两地.
 
一般relationship都是特别指男女朋友之间的关系, 比如你可以跟你的另一半说, I really appreciate our relationship. 就是我很感激我们能够在一起.
 
Long distance relationship是一种固定用法, 这样的**我常在广播中听到. 他们一般情况下不会说成 We live far away from each other. 只会说 We have a long distance relationship. 再来你可能可以接著说, It's so hard for me.
 
6. You should have chivalry. 你应该有点绅士风度。
 
我觉得美国的男生都蛮有风度的, 他们会帮女士开门 (这点在美国尤其重要, 因为美国的空气太乾燥了, 所以去开门常常会触电 ^__^ ) 会让 Lady first. 这种行为中文叫绅士风度, 但在英文中叫骑士精神 (chivalry)
 
7. I saw you smooching that girl just outside my window. 我看到你在我的窗外亲那个女孩喔。
 
Smooch 是一个口语, 它就完全等于大家所熟知的 kiss 这个字.
 
8. I'm all over you. 我对你非常地著迷.
 
All over you 就是说对你非常地著迷, 这还有另一种表示方法, 叫 I have a crush on you. 这二句都是表达很喜欢某人的意思.
 
All over somebody 还有一个很常用的用法, 我把它翻成“三贴”比如说你去舞厅跳舞, 看到有一对男女跳到三点都贴在一起了, 你就可以跟你的同伴说, Hey, look, the guy is dancing all over the girl.
 
9. I'm over you. 我跟你之间完了。
 
一字之差但是意思完全不同喔. 你要是说 I'm over you, 就是说我跟你之间完了, 我不想再和你有任何的瓜葛. 这和 I'm all over you 是完全不一样的。
 
10. Are you trying to seduce me? 你想要勾引我吗?
 
Seduce 就是说你用言语或是行为去勾引某人. 这句话在美国派 (American Pie) 当中有用到过喔! 就是其中有一个男生最后找不到伴了, 结果跑去勾引一个老女人. 那个老女人就说了, Are you trying to seduce me?
 
更好玩的是, 那个男生事后还跟同伴吹牛, "Women are like wine. They only get better with age." 女人吗, 就像老酒一样, 只会越陈越香。
 
 
 

1、日常用语类 - 

sporting house 妓院（不是“体育室”） -
dead president 美钞（上印有总统头像）（并非“死了的总统”） -
lover 情人（不是“爱人”）
busboy 餐馆勤杂工（不是“公汽售票员”）
busybody 爱管闲事的人（不是“大忙人”）
dry goods （美）纺织品；（英）谷物（不是“干货”）
heartman 换心人（不是“有心人”） -
mad doctor 精神病科医生（不是“发疯的医生”）
eleventh hour 最后时刻（不是“十一点”） -
blind date （由第三者安排的）男女初次会面（并非“盲目约会”或“瞎约会”） -

personal remark 人身攻击（不是“个人评论”） -
sweet water 淡水（不是“糖水”或“甜水”） -
confidence man 骗子（不是“信得过的人”） -
criminal lawyer 刑事律师（不是“犯罪的律师”） -
service station 加油站（不是“服务站”） -
rest room 厕所（不是“休息室”） -
dressing room 化妆室（不是“试衣室”或“更衣室”） -
horse sense 常识（不是“马的感觉”） -
capital idea 好主意（不是“资本主义思想”） -
familiar talk 庸俗的交谈（不是“熟悉的谈话”）

 

black tea 红茶（不是“黑茶”） -
black art 妖术（不是“黑色艺术”） -
black stranger 完全陌生的人（不是“陌生的黑人”） -
white coal （作动力来源用的）水（不是“白煤”） -
white man 忠实可靠的人（不是“皮肤白的人”） -
yellow book 黄皮书（法国政府报告书，以黄纸为封）（不是“黄色书籍”） -
red tape 官僚习气（不是“红色带子”） -
green hand 新手（不是“绿手”） -
blue stocking 女学者、女才子（不是“蓝色长统袜”） -
　　　　

China policy 对华政策（不是“中国政策”） -
Chinese dragon 麒麟（不是“中国龙”） -
American beauty 一种玫瑰，名为“美国丽人”（不是“美国美女”） -
English disease 软骨病（不是“英国病”） -
Indian summer 愉快宁静的晚年（不是“印度的夏日”） -
Greek gift 害人的礼品（不是“希腊礼物”） -
Spanish athlete 吹牛的人（不是“西班牙运动员”） -
French chalk 滑石粉（不是“法国粉笔”） -


 

2.习语类 -

pull one's leg 开玩笑（不是“拉后腿”） -
in one's birthday suit 赤身裸体（不是“穿着生日礼服”） -
eat one's words 收回前言（不是“食言”） -
an apple of love 西红柿（不是“爱情之果”） -
handwriting on the wall 不祥之兆（不是“大字报”） -
bring down the house 博得全场喝彩（不是“推倒房子”） -
have a fit 勃然大怒（不是“试穿”） -
make one's hair stand on end 令人毛骨悚然—恐惧（不是“令人发指——气愤”） -
be taken in 受骗，上当（不是“被接纳”） -
think a great deal of oneself 高看或看重自己（不是“为自己想得很多”） -
pull up one's socks 鼓起勇气（不是“提上袜子”） -
have the heart to do （用于否定句）忍心做……不是“有心做”或“有意做”） -


 

3.短句类 - 

What a shame! 多可惜！真遗憾！（不是“多可耻”） -
You don't say! 是吗！（不是“你别说”） -
You can say that again! 说得好！（不是“你可以再说一遍”） -
I haven't slept better. 我睡得好极了。（不是“我从未睡过好觉”） -
You can't be too careful in your work. 你工作越仔细越好。（不是“你工作不能太仔细”） -
It has been 4 years since I smoked. 我戒烟４年了。（不是“我抽烟4年了”） -
All his friends did not turn up. 他的朋友没全到。（不是“他的朋友全没到”） -
People will be long forgetting her. 人们在很长时间内会记住她的。（不是“人们会永远忘记她”） -

He was only too pleased to let them go. 他很乐意让他们走。（不是“他太高兴了，不愿让他们走”） -

It can't be less interesting. 它无聊极了。（不是“它不可能没有趣”） 图片

图片

图片

图片

图片

图片

图片

图片

图片

 

　thousand times no! 绝对办不到！
　　Easy does it. 慢慢来。
　　Don't push me. 别逼我。
　　Have a good of it.玩的很高兴。
　　What is the fuss？ 吵什么？
　　Still up？ 还没睡呀？
　　It doesn't make any differences. 没关系。
　　Don't let me down. 别让我失望。
　　God works. 上帝的安排。
　　Don't take ill of me. 别生我气。
　　Does it serve your purpose？ 对你有用吗？
　　Don't flatter me. 过奖了。
　　Big mouth! 多嘴驴！
　　Sure thing! 当然！
　　I''m going to go. 我这就去。
　　Never mind. 不要紧。
　　Can-do. 能人。
　　Close-up. 特写镜头。
　　Drop it! 停止！
　　Bottle it! 闭嘴！
　　Don''t play possum! 别装蒜！
　　There is nobody by that name working here.这里没有这个人。
　　Break the rules. 反规则。
　　How big of you! 你真棒！
　　Poor thing! 真可怜！
　　Nuts! 呸；胡说；混蛋
　　Make it up! 不记前嫌！
　　Watch you mouth. 注意言辞。
　　Any urgent thing？ 有急事吗？
　　Don't over do it. 别太过分了。
　　Can you dig it？ 你搞明白了吗？
　　You want a bet？ 你想打赌吗？
　　What if I go for you？ 我替你去怎么样？
　　Who wants？ 谁稀罕？
　　Follow my nose. 凭直觉做某事。
　　Gild the lily. 画蛇添足。
　　I'll be seeing you. 再见。
　　I wonder if you can give me a lift？ 能让我搭一程吗？
　　I might hear a pin drop. 非常寂静。
　　Why are you so sure？ 怎么这样肯定？
　　Is that so？ 是这样吗？
　　Don't get loaded. 别喝醉了。
　　Don't get high hat. 别摆架子。
　　Right over there. 就在那里。
　　Doggy bag. 打包袋。
　　That rings a bell. 听起来耳熟。
　　Sleeping on both ears. 睡的香。
　　Play hooky. 旷工、旷课。
　　I am the one wearing pants in the house. 我当家。
　　It's up in the air. 尚未确定。
　　I am all ears. 我洗耳恭听。
　　Get cold feet. 害怕做某事。
　　Good for you! 好得很！
　　Help me out. 帮帮我。
　　Let's bag it. 先把它搁一边。
　　Lose head. 丧失理智。
　　Talk truly. 有话直说。
　　He is the pain on neck. 他真让人讨厌。
　　You bet! 一定，当然！
　　That is a boy! 太好了，好极了！
　　It's up to you. 由你决定。
　　The line is engaged. 占线。
　　My hands are full right now. 我现在很忙。
　　Don't make up a story. 不要捏造事实。
　　Absence makes the heart grow fonder. 小别胜新婚。
　　She make a mess of things. 她把事情搞得一塌糊涂。
　　Get an eyeful. 看个够。
　　He has a quick eye. 他的眼睛很锐利。
　　Shoot the breeze. 闲谈。
　　Tell me when! 随时奉陪！
　　Let's play it by ear. 让我们随兴所至。
　　Why so blue？ 怎么垂头丧气？
　　What brought you here？ 什么风把你吹来了？
　　Chin up. 不气 ，振作些。
　　You never know. 世事难料。
　　High jack! 举起手来(抢劫)！
　　She'll be along in a few minutes. 他马上会过来。
　　He is a fast talker. 他是个吹牛大王。
　　I'll get even with him one day. 我总有一天跟他扯平
　　She's got quite a wad. 她身怀巨款。
　　I don't have anywhere to be. 没地方可去。
　　I'm dying to see you. 我很想见你。
　　Nothing tricky. 别耍花招。
　　Price is soaring, if it goes on like this, we shall not be able to keep the pot boiling.
　　物价直线上升，这样子下去，我们锅里可没什么东西煮饭。
　　None of you keyhole. 不准偷看。
　　Come on, be reasonable. 嗨，你怎么不讲道理。
　　You don't say so. 未必吧，不至于这样吧。
　　Don't get me wrong. 别误会我。
　　You don't seem to be quite yourself today. 你今天看起来不大对劲。
　　Do you have any money on you？ 你身上带钱了吗？
　　Dinner is on me. 晚饭我请。
　　Not precisely! 不见得，不一定！
　　We have no way out. 我们没办法。
　　I hate to be late and keep my date waiting. 我不喜欢迟到而让别人久等。
　　It doesn't take much of you time. 这不花你好多时间。
　　Not in the long run. 从长远来说不是这样的。
　　It is of high quality. 它质量上乘。
　　He pushes his luck. 他太贪心了。
　　I can't make both ends meet. 我上个月接不到下个月，缺钱。
　　It can be a killer. 这是个伤脑筋的问题。
　　You ask for it! 活该！ 






1,魔法灰姑娘〔超级推荐〕 （安妮海瑟薇主演） 2,贱女孩〔超级推荐〕（林赛罗汉主演） 3,灰姑娘的玻璃手机〔超级推荐〕 4,美人鱼〔超级推荐〕 （里面音乐也很好听） 5,舞出我人生〔超级推荐〕 （励志的！刚出了第二部） 6,录取通知书 7,水瓶座女孩 （看过，讲的父女） 8,倒霉爱神 （2006林赛罗汉主演） 9,儿女一箩筐 10,冰雪公主〔超级推荐〕 11,我的朋友是明星〔超级推荐〕 12,辣妈辣妹〔超级推荐〕 （林赛罗汉主演） （看过，很有意思） 13,物质女孩〔超级推荐〕 14,疯狂金龟车 （林赛罗汉主演） 15,平民天后〔超级推荐〕 16,公主日记(不用说勒)〔超级推荐〕（还有第二部哟！） （看过）  17,歌舞青春〔超级推荐〕[很热的电影！]（Ⅰ和Ⅱ都喜欢） 18,律政俏佳人 19,麻辣宝贝〔超级推荐〕 20,恋爱刺客  21,美少女啦啦队〔超级推荐〕（看过，女主角很漂亮） 22,12月男孩〔超级推荐〕 （哈利波特演的哟） 23,足球尤物 24,魔法双星 25,超完美男人〔超级推荐〕 25,劲歌飞扬〔超级推荐〕 26,纽约时刻 27,奶牛美女 28,穿PRADA的恶魔〔超级推荐〕 29,天生一对 30,高校天后〔超级推荐〕（看过） 31,像乔丹一样 32,牛仔裤的夏天〔超级推荐超感人～〕 33,初恋的回忆〔超级推荐 〕 34,甜心辣舞〔超级推荐〕 35,花豹美眉 36,女兵报道 37,女生向前翻〔超级推荐 很立志！〕 38,小姐好辣  39,欧洲任我行 40,留级之王 41,风云才女(希尔顿酒店继承人之一尼克?希尔顿首部主打影片！ 这是一部有关大学女生校园生活的喜剧，影片描述大学校园里一群正处于青春叛逆期、蠢蠢欲动的特权阶层少男少女平日里生活的点点滴滴…… 有点点SEX)〔超级推荐I LOVE HILTON SISTERS〕 42,谁领风骚〔超级推荐 女生的可怕和可爱〕 43,SAVED 44,疯狂有理 45,初露锋芒 46,美丽坏宝贝〔超级推荐(很有教育意义)〕 47, 新欢乐满堂 48,几乎正常 49,总统千金欧游记 （看过） 50,辣妹保镖 51,我爱猫头鹰 52,朋友一场 53,偶像有约 54,彻夜狂欢 55,窈窕美眉 56,第1女儿〔超级推荐〕 57,被拯救者 58,对此承诺〔超级推荐〕 59,魔法保姆 60.对面恶女看过来 61,变装拍档〔超级推荐〕 62,虚拟偶像 63,新丁驾到 64,怪女孩出列〔超级推荐〕 65,一吻定江山 66.篮球兄弟 67,流行教母 68,魅力四射 69,美国甜心 70,超完美夺分〔超级推荐〕 80小岛惊魂、love me if you dare ——86美国派1——6 87，小王子（韩） 88，不设防都市（韩） 89，科洛弗档案 90，十诫 91.恋爱假期（急速推荐） （看了，没看完，女主角是泰坦尼克号女主角） 92.乔治亚法则（林赛罗汉） 93.美女与丑姑（风流女帕里斯希尔顿新作） 94.附注我爱你（新片！唯美爱情） 95.珍妮朱诺 96-100惊声尖笑1-4（美国超级讽刺好莱坞大片大搞笑电影，极力推荐）、


	2 3 4
	1 2 3
	0 1 2

	int array[3][4] = {				{
			{1, 4, 7, 0},			{1, 2, 3},
			{2, 5, 8, 0},			{4, 5, 6},
			{3, 6, 9, 0},			{7, 8, 9},
		}							{0, 0, 0},}

	int i = 0, j = 0;
	int a[4][3] = {0};
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			b[j][i] = a[i][j];
		}
	}

static int fun(const int *a, const int r, const int c, int *b){
	int i = 0,
		j = 0;
	int x = 0,
		y = 0;

	if (NULL == a || NULL == b) {
		goto err_1;
	}

	if (x <= 0 || y <= 0) {
		goto err_2;
	}

	if (r <= c) { /*判断行列大小，用于决定循环方式*/
		x = r;
		y = c;
	} else {
		x = c;
		y = r;
	}

	for (i = 0; i < x; i++) { /*循环低频率在外，提高效率*/
		for (j = 0; j < y; j++) {
		*(*(b + j) + i) = *(*(a + i) + j);
		}
	}

	return 0;
err_1:
	return -1;
err_2:
	return -2;
}

int ch = 1;
printf("%d\n", (char)ch);




/**
 *程序功能
 * 1.输入任意自然数
 * 2.输出所有奇数
 * 3.遇到7或7的倍数则输出 gotit
 *例 请输入一个自然数? 14
 *   =》输出
 *   1,3,5,gotit,9,11,13,gotit
 */

static int get_number(int *number); /*获取一个大于0的数字*/
static void print_number(const int number); /*打印小于number的所有奇数，遇到小于number并且为7的倍数则打印gotit*/

int main(int argc, char *argv[]) {
	int number = 0;

	printf("请输入一个自然数?");
	fflush(stdout);
	get_number(&number);

	printf("=>输出");
	print_number(number);

	return 0;
}

/**
 *Function: static int get_number(int *number)
 *Description: 获取一个大于0的数字
 *Input: @number 获取目标地址
 *Rutern: 成功返回 0
 *        失败返回 -1 若输入次数超过5次则视为获取失败
 */
static int get_number(int *number){
	int flag = 0;

	while (1 != scanf("%d", number)) {
		getchar();
		if (*number > 0) {
			break;
		}

		flag++;
		if (5 == flag) {
			goto err;
		}
	}

	return 0;
err:
	return -1;
}

/**
 *Function: static void print_number(const int number)
 *Description: 打印小于number的所有奇数，遇到小于number并且为7的倍数则打印gotit
 *Input: @number 数字
 *Rutern: 无
 */
static void print_number(const int number){
	int index = 0;

	for (index = 1; index <= number; index++) {
		if (1 == index % 2) {
			printf("%d, ", index);
		} else if (0 == index % 7){
			printf("gotit,");
		}
		fflush(stdout);
	}
}





您好。
1.没使用过，没有github账号。
2.使用过snv，在培训最后做项目的时候，在网上找到相关内容，自己安装了snv服务器与客户端，并熟悉了代码提交，版本控制，代码对比等效果，
3.没有 mac电脑 ，正在使用中的是联想G470
4.在培训期间使用的是 ubuntu ，没有配置过ruby开发环境，因为下午有个面试，晚上回来我找下相关资料，熟悉下。编辑使用 vi 结合 ctags ，在windows下使用 notepad++ 和 source insight




























