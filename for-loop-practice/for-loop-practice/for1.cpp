/**********************************
拙失析 : 2025-04-17
for庚 叔柔 庚薦
***********************************/

#include <iostream> // std::cout 窒径 什闘顕 紫遂獣 脊窒径什闘顕 伯希督析聖 匂敗獣佃醤敗 
// 戚政 : cout 窒径 梓端亜 iostream伯希 督析拭 識情鞠嬢赤製
// #include澗 穿坦軒奄 走獣切(陳督析 穿拭 呪楳,伯希 督析 鎧遂戚 社什拭 差細)稽 社什坪球拭 耕軒 匂敗聖 獣佃醤 
// 陳督析君亜 戚惟 杭走 硝壱 痕発 拙穣聖 坦軒拝 呪 赤陥

/* C++拭辞税 痕発 引舛 貢 叔楳 : 社什 坪球 ->(陳督析君亜 呪楳) 陳督析 -> 嬢疾鷺軒嬢稽 痕発(.s 暁澗 .asm)
	-> 奄域嬢(郊戚格軒 坪球,2遭呪 坪球)稽 痕発 -> 鯉旋 覗稽益轡(.o 暁澗 .obj) 
	-> 元滴(元朕亜 呪楳, 食君 鯉旋督析引 虞戚崎君軒研 杯団辞 叔楳 督析稽 幻糾) 
	-> 叔楳 督析 持失(.exe) -> 稽球(稽希亜 呪楳, 左繕奄常舌帖拭 赤澗 叔楳督析聖 爽奄常舌帖拭 臣顕) -> 叔楳 喫
*/
//#include <string> // std::to_string() 収切研 庚切伸稽 痕発馬澗 敗呪 紫遂獣 匂敗獣佃醤 敗
int main() {
	int count = 0; // 窒径 判呪 嗣焼左形壱 識情敗

	// 叔柔 1
	// 繕闇1 : 'せせせ' 聖 100腰 窒径馬澗 覗稽益轡聖 幻級嬢爽室推.
	// Print "せせせ" 100 times using a for loop
	for (int i = 0; i < 100; i++) { // i亜 0~99猿走 1梢 装亜馬悟 恥 100腰 鋼差叔楳鞠壱, i亜 100戚 鞠檎 曽戟
		std::cout << "せせせ\n";
		count += 1; // 窒径 判呪研 疾
	}
	std::cout << "\n\n恥 " << count << "腰 鋼差 叔楳鞠醸柔艦陥\n\n"; // 窒径 判呪 嬬車拭 窒径
	//std::cout << "\n\n恥 " + std::to_string(count) + "腰 鋼差 叔楳鞠醸柔艦陥\n\n";

	// [凧壱] \n 企重 std::endl聖 潤亀 喫
	// std::endl精 匝郊嘩 + 獄遁 flush(搾酔奄)研 旭戚敗
	// endl(end line) 匝 魁, 匝郊嘩聖 税耕敗, \n引 旭戚 匝聖 郊蚊爽壱 窒径 獄遁猿走 搾趨捜(flush)
	// flush空? 窒径 獄遁拭 竣焼黍 汽戚斗研 -> 悪薦稽 巨郊戚什(嬬車, 督析 去)稽 鎧左鎧澗 依

	// 叔柔 2
	// 繕闇1 : 1985 採斗 2023猿走 窒径馬澗 覗稽益轡聖 幻級嬢 爽室推.
	for (int i = 1985; i <= 2023; i++) { //i亜 1985 ~ 2023猿走 1梢 装亜馬悟 鋼差 叔楳喫,i亜 2024亜 鞠檎 曽戟
		std::cout << i << "\n";
	}

	std::cout << "\n\n";

	// 叔柔3
	// 繕闇1 : "脊径廃 判呪" 幻鏑 "照括"聖 窒径馬澗 覗稽益轡聖 幻級嬢 爽室推.
	int input_value; // 脊径廃 判呪 眼聖 痕呪 識情
	count = 0; // 限惟 拙疑鞠醸澗走 溌昔遂

	std::cout << "据馬澗 窒径 判呪 : ";
	std::cin >> input_value; // 紫遂切拭惟 葵(脊径 判呪)研 脊径 閤焼 痕呪 input_value拭 煽舌
	std::cout << "\n";
	// 紫遂切亜 脊径廃 判呪幻鏑 照括聖 窒径
	for (int i = 1;i <= input_value;i++) { // i亜 1採斗 input_value猿走 鋼差叔楳, 恥 input_value腰聖 鋼差敗 
		std::cout << "照括\n";
		count += 1;
	}
	std::cout << "\n恥 " << count << "腰 叔楳喫\n\n";  // 窒径 判呪 溌昔

	// 叔柔4
	// 1 採斗 "脊径閤精 呪" 猿走 窒径馬澗 覗稽益轡聖 幻級嬢 爽室推.
	int input_num; // 脊径閤精 呪 煽舌拝 痕呪 識情

	std::cout << "舛呪 脊径 : ";
	std::cin >> input_num; // 紫遂切拭惟 葵聖 脊径閤焼 痕呪 input_num拭 煽舌敗
	std::cout << "\n";

	//1採斗 "脊径閤精 呪"猿走 窒径
	for (int i = 1; i <= input_num; i++) { // i亜 1~input_num猿走 1梢 装亜馬悟 鋼差 叔楳 喫
		std::cout << i << "\t"; //廃 匝稽 蟹空備 窒径
	}
	
	std::cout << "\n\n";

	return 0;
}

/*
叔柔 1 背岩

#include <iostream>

int main() {
	int i;

	for ( i = 0 ; i < 100 ; i++ ){
		std::cout << "せせせ\n";
	}
}

*/

/*
叔柔 2 背岩

#include<iostream>

int main() {
	int i;

	for ( i = 1985 ; i < 2024 ; i++ ){
		std::cout << i << " ";
	}
}

*/

/*
叔柔 3 背岩

#include <iostream>

int main() {
	int n, i;

	std::cout << "脊径: ";
	std::cin >> n;

	for ( i = 0; i < n; i++ ){
		std::cout << "照括 ";
	}
	return 0;
}

*/

/*
叔柔 4 背岩

#include <iostream>

int main() {
	int n, i;

	std::cout << "脊径: ";
	std::cin >> n;

	for ( i = 1; i <= n; i++ ){
		std::cout << i;
	}

	return 0;
}

*/