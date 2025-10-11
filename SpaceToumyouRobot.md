---
title: 宇宙栽培試行のための栽培システム試運転と植物栽培記録
tags: 宇宙開発
author: busyoucow
slide: false
license: CC0
copyright: reserved
---

<div class="page"/>

# アブストラクション
秘密結社オープンフォースでの総統(@nanbuwks)指揮による今までの活動として、

宇宙栽培試行のための閉鎖空間内豆苗栽培と栽培ロボット運用記
(https://github.com/busyoucow/SpaceToumyou)
では、人間の手による管理で豆苗を水耕栽培を行い、

宇宙栽培試行のための栽培ロボット起動及び構造物と配管組み上げ記録
(https://github.com/busyoucow/SpaceRobotFarmTest01)
では、総統より供与された栽培ロボットの組み立て及び動作確認を行った。


今回は宇宙市民としての第一歩として、実際に食用植物を総統提供の栽培ロボット
(https://qiita.com/nanbuwks/items/37bffef16036937eecc3) 
を使用して実際に育成しその経過観察を行ったため記載する。

これにより数日間離室した際に栽培中の苗を寿命延命できるか試行し検証していく。
また栽培ロボットを実用に耐えるよう配管の組みなおしを行ったため、その過程も記載する。


# はじめに
H3ロケット打ち上げに関するTV番組が放映され、宇宙関連イベントも行われ宇宙開発機運が高まっている時に、「それ」は来た。

政治も経済も国際情勢も混迷を極めているこの最中で、「それ」は清々しい一服の清涼剤にも感じた。
今は2025年である。街には大阪万博のキャラクターが溢れ連日猛暑が報道されている。

総統より栽培ロボットをキットで受け取って1年以上。

都心の広場で栽培ロボット基板を実装確認したり（その後熱中症でダウンした）

乾燥大豆から水で戻してレンチン調理したり（乾燥大豆まだ残っている）

年末にロボスタディオン (@robostadion) ではんだ付けの匠の技を目の当たりにしたり（御徒町の海産物は美味しかった）…

本当に色々あった。

Jaxaが月面に向け有人ローバーを打ち上げるまで、あと6年。

我々もそろそろ目に見える成果があってしかるべきだろう。
と、いうよりこのままでは宇宙市民として生きる時代に間に合わない。

能登半島の復興も気になるが、身体も脳も1セットしかない以上リソースは限られている。
不安で溢れる未来に向けて、今筆をとる…

<img alt="picture 6" src="images/a94adcd340c4c3a4f17afe4e40342397335fd9ec194046427c9821abf1938004.jpg" width="200" />  

<img alt="picture 9" src="images/f4002c232b757b3e970162d05fe2e0242c2fc41e31f862786c951e2afc6da2d4.jpg" width="200" />  

<img alt="picture 7" src="images/2cb726a25e08ab53a5c0ced4637ca591b9e0f3f47c1df5f1d4bcfcecfe26dfb5.jpg" width="200" />  



# 前回のあらすじ

宇宙栽培試行のための閉鎖空間内豆苗栽培と栽培ロボット運用記
(https://github.com/busyoucow/SpaceToumyou)
に記載されているが

豆苗を買ってきて

<img alt="picture 0" src="images/746ec752ec1f2e1c4aad9d4d3c9e5f480c436fd5ec44c12ad5d78c4aad54fad7.jpg" width="200" />  

上半分は美味しく頂き

<img alt="picture 1" src="images/ed8fb6200d4fb5e896963a15038078d03b3ccbdea5d05255b2d962c202823628.jpg" width="200" />  

残った下半分を使って栽培ロボットを使わず育成

<img alt="picture 2" src="images/a3ce1361322e5daa3fb4fb05eb5d708ba055e324ec6c7a912a0b02561bf7db70.jpg" width="200" />  

発芽試験に使ったプラ果実酒瓶に入れて週2回水替えしエアポンプで空気を水に含ませる

<img alt="picture 3" src="images/6f8d99e082c3a5e97eea529bbfd821b6c7ba8c3772035a535ba295391e028c1e.jpg" width="200" />  

すくすくと育った部分を何度か収穫し

<img alt="picture 4" src="images/40635fad96ff080606aa9e242060731f16846f9ec1facb8bb4fc6ae836ef5c62.jpg" width="200" />  

使用限界を超えた豆苗の根は腐っていった…

<img alt="picture 5" src="images/b5750e98fd5595f0af5d7b68c7c9726deb7330fe6581fd0f001c8c296d668d92.jpg" width="200" />  


# 計画
<img alt="picture 8" src="images/ef6ebe20c055144f66d10459334603c2ba3e393739f2ae7c4de6488cedb3a044.png" width="200" />  

宇宙空間にて長期滞在する場合、打ち上げコストとの兼ね合いにより新鮮な食料の現地生産による確保を検討する必要があると考える。
また昨今災害や気象不順により農作物の生産に不都合が生じ、物流危機とあいまって新鮮な食材の確保が安定してできないという事態が増えつつある。
令和の米騒動はもはやフィクションではなくなった。


食事の確保は人間の幸福に関して大きな比重を占めるのは否定できないであろう。

そこで、実践が比較的容易な簡易的植物栽培システムを稼働させ実証実験するものとする。

また、これにより数日間離室した際に栽培中の苗を寿命延命できるか試行し検証するものとする。

上記の写真は以前行われたイベント「オープンハードカンファレンス」にて実稼働ではないが栽培ロボット動作デモを行った際のものである。

詳細は

宇宙栽培試行のための栽培ロボット起動及び構造物と配管組み上げ記録
  (https://github.com/busyoucow/SpaceRobotFarmTest01) 

 に掲載されているため興味があれば参照して欲しい。


# 必要な設置機材を組み立てる
アニメや漫画ではないのですぐ使える状態のセットが販売されているものではない。
しかし、使用する部材の大部分は100円ショップのダイソーで入手できる。
詳細は上記 (https://github.com/busyoucow/SpaceRobotFarmTest01) に記載されているが…

ちゃんと機材リストをここにも記載する。

## 必要な部材リスト

|品目|数量|部位|
|:----|:----|:----|
|ダイソージョイントラック用棚(II型)25cm × 45cm|2枚|今回はラック下端にも使用したが計画ではラック上端に2枚使用し細長いビニール袋上部を間に通して固定する(今回栽培瓶を使用の為袋は未実装)|
|ダイソージョイントラック用ポール39cm|4本|ラック下部に使用|
|ダイソージョイントラック用延長ポール38cm|4本|今回は未使用だがビニール袋を使う際にラック上部に使用(黒いポール部分)|
|ダイソージョイントラック用バスケット棚25cm × 45cm × 6.5cm|1枚|今回は未使用だがラック最下部に使用し栽培瓶を保持|
|ダイソーフリーマルチネット35cm × 35cm|1枚|今回はメンテナンスのため未使用だが背面に固定し栽培ロボットを黒いファイルケースに入れて吊り固定|
|ダイソージョイントラック用固定部品|3パック(12個)|ポールにつけて棚を固定するのに使う|

## 組み立ててみる

<img alt="picture 53" src="images/621a29899b846d9d530bb8cdc65802e57a74425df84f4375efcf1dbeca74d867.jpg" width="200" />  

メタルラックを実際に組み立てるとこのような感じになる。

<img alt="picture 54" src="images/8319e6c6dcc509a27e0f2e97807d72e2b242c71bf85987067f7031822540d8fc.jpg" width="200" />  

ピンクの栽培瓶を置いてみる。この後下段奥には給水ボトルと排水ボトルが格納されたプラスチックケースを置き、メンテナンスがしやすいよう上段には栽培ロボットを置く予定であった。

## スペースとの兼ね合いにより部材をコンパクトに
しかし、この実験は筆者の狭いワンルームにて行われている都合上部材によって部屋スペースが圧迫されて不都合が生じていた。

そこでもう少しコンパクトな部材を取り寄せて実験途中に間に合ったため、開始4日経過時点で組みなおすこととした。
部材の変更は以下の通りである。

ダイソージョイントラック用棚(II型)25cm × 45cm → ダイソージョイントラック用棚(II型)29cm × 29cm


# そして、登場

そしてこれが総統より供与された栽培ロボットである。

栽培ロボットをインストール 1st
(https://qiita.com/nanbuwks/items/37bffef16036937eecc3) 

<img alt="picture 56" src="images/3806ddd1e16cf5fb9d634d5f833d5303066573c5d5e9f8be48f286d0d675208f.jpg" width="200" />  

只の電子基板じゃないかとがっかりされたかもしれないが、アームも搬送ユニットも無くても立派にロボット(自動機械)である。
様々な機能があるが、今回は搭載されたウォーターポンプ2基とWi-Fiに接続可能なマイコン、多数のバルブを使用して栽培運用するものとする。

必要な能力は
- 給水ボトルから一定条件を満たしたときに栽培瓶へ給水動作できること
- 栽培瓶から一定条件を満たしたときに排水ボトルへ排水動作できること
- 毎日指定された時刻に一定条件を満たしたものと判断できること
- ボタンを押したとき一定条件を満たしたものとして試験動作できること

この栽培ロボットはこれら全ての条件を満たしている。

指定された時刻に一定条件を満たしたものと判断するため、設置場所である自宅のWi-Fiルータと無線(Wi-fi)接続し、インターネット経由で外部のNTPサーバより現在時刻を取得して指定時刻であるかどうかを判断するようなプログラムをマイコン(ESP32)へ書き込んだ。

このあたりの詳細はまた別の機会にて紹介するものとする。

## 関連の必要な部材
栽培ロボット以外はダイソー及び100円ショップやホームセンターにて調達できる。

|品目|数量|部位|
|:----|:----|:----|
|栽培ロボット|一式|ダイソーフリーマルチネットにファイルケースを挟んで固定する(今回の試験ではメンテナンスの都合上未固定)|
|太いチューブ|4本|モータポンプと接続する バルブ等へは細いチューブを継いで使用する|
|細いチューブ|11本|バルブと分岐バルブ及び分岐パイプに接続する ボトルに直接入れるのにも使用|
|インシュロック|1袋|チューブを接続する各所に使用し水漏れを防ぐ|
|シールテープ|1巻|水漏れが酷いときに適宜使用|
|給水ボトル|1本|液肥を1～2滴添加した水道水を入れて使う|
|排水ボトル|1本|排水が入るため給水ボトルより大きめが望ましい|
|栽培瓶|1本|栽培したい植物の苗を入れて使うため口が大きいもの|
|プラスチックケース|1箱|給水ボトルと排水ボトルを入れてラック棚に設置|
|液体肥料|1本|6-10-5ハイポネックス同等品 水に添加し植物の成長を促進する|
|麦飯石|1袋|水の汚れを抑制する|
|排水口ネット|1袋|ボトルや瓶の口を覆う防虫ネットや苗を分けるのに使用|
|輪ゴム|1袋|防虫ネットを固定する際に使用|
|エアーポンプ|1式|栽培ロボットとは別に魚飼育用のものを常時稼働し空気の循環も図る|

また、今回は異物混入防止のため、給水側にチューブ用ウォーターストーンと緩めた噴霧用ノズルを付けているが必須ではない。

# タコ足配管縦横無尽
配管は以前の記事( https://github.com/busyoucow/SpaceRobotFarmTest01 )で接続して栽培ロボット動作展示で稼働させたが、配管からは水漏れを生じている状態であった。

<img alt="picture 55" src="images/d53ae8a7336f2a44c08b9491a126dc0ed486ba4469d21e357955d95e248483a9.jpg" width="200" />  

そのため栽培ロボットはメタルラックにワイヤネットを垂直に取り付けそこに栽培ロボットを固定し、漏れた水が基板の電装部分に行かず下へ落ちるようにした。
その下の段には水受けとしてACタップのプラスチック包装を置き、更に下にプラスチックケースを配置し給水ボトルと排水ボトルを格納した。
これで会場の床は水浸しになることは無くなった。
しかしこれは応急的な措置であり、実際に栽培時運用検証を行う際は改善する必要があった。

そこでまずは栽培ロボットそのものの配管水漏れを防ぐことにした。

<img alt="picture 57" src="images/b9af6b29dbb67122f44afba0c94be2d3ab17c8c42dae17c4fc6fcb520353eff9.jpg" width="200" />  

まずは水を通すチューブとポンプやバルブとのつなぎ目に黒いインシュロック(結束バンド)をつけて水漏れを抑えてみた。

<img alt="picture 58" src="images/8d93a606af9b96967063cd7d607c6968734305b28c43b8f3b5d3bcb73b8d0701.jpg" width="200" />  

しかし、水漏れを完全に防ぐことはできなかった。ティッシュを置いているところで水漏れを起こしている。
何度か検証した結果、水漏れを起こしやすいのはウォーターポンプ(配線の付いたベージュの円筒形のもの)とチューブとの接続部、そして三又部品との接続部であった。

<img alt="picture 59" src="images/254769ed77285d8ab72ac16f513f691593da561bca7dfdd44b92f9b0444cf75f.jpg" width="200" />  

そこでウォーターポンプに接続した太めのチューブに細いチューブを差し込みより接続部に合ったチューブと接続することによりゆるみを防ぐこととした。

<img alt="picture 60" src="images/9eb907f2781bd62a1b8e4667ef93e66701db940b562d1795a889c9be777272d8.jpg" width="200" />  

これにより、水漏れは劇的に減った。


# 実際に豆苗を栽培してみよう
美味しく食べられる豆苗を栽培ロボット管理のもと栽培していく。

<img alt="picture 10" src="images/09b8ad172ebd51098c9a343b55a38a9624ec530a93cea5ca2dc0d465f6e4227b.jpg" width="200" />  

前回同様、豆苗を買ってくる。最近は値上げこそしないが閉店間際には売り切れることも少なくない。

<img alt="picture 11" src="images/38cdbfc7821928a1898c0a7ef4f634c1f7fc5bdd6bfc04c6a65b947e7a46fe5b.jpg" width="200" />  

元気に生えている苗を

<img alt="picture 12" src="images/bd03b4f328fadc8bc08c73cc5c6b5b8cc1404092d9571894faa1520f5711dae6.jpg" width="200" />  

根の部分から二つに分ける

<img alt="picture 13" src="images/e10a461de5da0ccff55f8465c0f8bfe9e860ee3ebadcfcb68c297e698607617a.jpg" width="200" />  

上部を切り取り

<img alt="picture 14" src="images/eea70c4b03c63c7b72ef5d67ecf14d65248d6ead28646496f2427adcc9a256a3.jpg" width="200" />  

排水口ネットをつけて小分けにする

<img alt="picture 15" src="images/2e1d63019f88f60db03cc907134050092690072d9e0518e87cc70b331f425a13.jpg" width="200" />  

今回はメンバー間フィードバックにより知った麦飯石を敷いてみる

<img alt="picture 16" src="images/30bf9f076beaace1396d892bd3fbb952e5150acae6e91b9b41c2a744aa9c07e2.jpg" width="200" />  

これで水質が改善されるとよいのだが

<img alt="picture 17" src="images/e16df1bc56066b7a342aeb10beef9f2e35e4d361dc99dbff85b794f0f06d5041.jpg" width="200" />  

苗を一つ置くがスペースはまだあるので

<img alt="picture 18" src="images/00cffab30e8a94a5ae81641e7b1118d18b4bbed27069c211b2d6f1b6fb730648.jpg" width="200" />  

切り分けたもう一つも排水口ネットをかけて

<img alt="picture 19" src="images/dc3d64d496b3aa67454c82d92f8ee9479f185df2d23f929087cee8267d466443.jpg" width="200" />  

水と共に瓶の中に入れると瓶はいっぱいになる

<img alt="picture 20" src="images/e3fc37d7805f3ed483721b6941073bc6a329bbff49eb3537ea06f428915e2988.jpg" width="200" />  

瓶の口にも排水口ネットをつけて輪ゴムで留め防虫対策とする

<img alt="picture 21" src="images/98bae837fc7ff85ffa2ff759640fda0c85d2839bf70ac4401225b2bf23331a4f.jpg" width="200" />  

今回もエアーポンプで常時空気を水に含ませる

<img alt="picture 22" src="images/4927de86e15f134dad6097d60c06bdc5d5762d9561011bde59819b7d5b971c79.jpg" width="200" />  

エアーポンプは今夜から常時稼働させておく

<img alt="picture 23" src="images/89e365ce455b79c17d21d7bc92a2189e5552984012861508d363738ac9f771ca.jpg" width="200" />  

今回切除した茎と葉は調理して頂くとしよう

# 導入
そしてこの後、家を４日空ける必要に迫られた。

今こそ栽培ロボットを実際の栽培で稼働する好機である。
記憶が没する前に、設置する過程をここに記すものとする。

<img alt="picture 24" src="images/fa5465fc26984af1e0f61ca06d00ec43d95cc415927af736ec9366087f3fb8df.jpg" width="200" />  

まずは栽培ロボットを用意する。

<img alt="picture 25" src="images/035d58160d3cceb34a942a67b94d95d2a453fa92cb5c68fbb9a187c0d5d26534.jpg" width="200" />  

配管構成を一部変更して、栽培瓶の他に給水瓶と排水瓶を用意する。

<img alt="picture 26" src="images/245b6b07ab9f375edd651b53dc3d8d3557187d97e9eb0565a2d6249846284cf6.jpg" width="200" />  

給水側パイプにはゴミが入らないようストーンをつける。

<img alt="picture 27" src="images/ad4467658138b929e39f2024b7cdb32a9cab118314d7f84da8e515fc957a470d.jpg" width="200" />  

上から排水瓶、栽培瓶相当のテスト用仮の栽培瓶、給水瓶。給水瓶が楽天のペットボトルなのはご愛敬。

<img alt="picture 28" src="images/c12541d0860f13d0f55d2b9d512d2297a436d17f53a37f645ee58de097772dbb.jpg" width="200" />  

ボタンを押して実際に稼働するかテスト。

<img alt="picture 29" src="images/3d838d3bc937fd1fecaa5e467734577a8020fb2747a85365fb0f546ef3176d7c.jpg" width="200" />  

事前にプログラムを変更し、午前６時半になるかボタンが押されたらまず栽培瓶から排水を8秒間行う。

その後栽培瓶へ8秒間給水を行う。最後に60秒待ち6時半に稼働した際に連続して動作するのを防ぐ。

<img alt="picture 30" src="images/6435ab75be1518900ba4c6e1b073a138e8db312997f9ab0406593c3e29ad4409.jpg" width="200" />  

とりあえずうまく動作しているようだ。

<img alt="picture 31" src="images/0264f86f44d013b93de521a5d8db77fbe852ad868803f016e12a31a1a35cd8ed.jpg" width="200" />  

初めは空気が送られていたが、何度かボタンを押したので排水瓶へは水が流れている

<img alt="picture 32" src="images/c6ab711a28eb3125096bd8d69374eb73e9ce678976556b1c6b8f90674098c985.jpg" width="200" />  

仮の栽培瓶へも水が溜まっている。

<img alt="picture 33" src="images/620cb84654075e90813de5f9d4b8a1858d85f3b4f3ca54b40ac40635e93e8278.jpg" width="200" />  

給水瓶も順調に水が減っている。

<img alt="picture 34" src="images/19df4302a5f67a5975a99d53f6c64ebb53d844b04ac56a2661bdb86a2c8b03b9.jpg" width="200" />  

試験稼働は成功と言っていいだろう。

<img alt="picture 35" src="images/923cdd41d2e0c2dd1c81b4a759e2ca989227d449e55499eecf2d53c0e1671213.jpg" width="200" />  

栽培ロボット側も特に水漏れをしていない。

<img alt="picture 36" src="images/4ade5de0e75e242c47f2b03f56901f6d5a8f3fef2c9cf8f568ab3d94cc516bd8.jpg" width="200" />  

では、ここから実際の栽培瓶に移行するものとする。

<img alt="picture 37" src="images/dc517503eab987d53353c662dafcd730280d93ca70cbac54999c5df1ca770580.jpg" width="200" />  

実際の栽培には液体肥料を添加する。

<img alt="picture 38" src="images/4be2f398dde589ae172ed5ef291db67ae152a9c65f403f1f468f80560b477f5c.jpg" width="200" />  

添加量は一回に1～2滴ほど。これを水道水で薄める。

<img alt="picture 39" src="images/80f79a4e7fe95526d8dfc36106f923ad0510105656c8333acd167e2503956063.jpg" width="200" />  

給水瓶と排水瓶は引き続き同じものを使用。排水瓶は万が一の水溢れを考え大きくしてあり、更に万が一の水漏れを考え二つの瓶はプラスチックケースに入れる。

<img alt="picture 40" src="images/4e06b574bfaf7a3d28e607ba5b2bea241d8b6aa761a4c305811ed93b384ee364.jpg" width="200" />  

給水瓶と排水瓶には排水口ネットを取り付け、虫の侵入を防ぐ。

<img alt="picture 41" src="images/13531c846e39e41f9a19ab2e5d46f3d756c028a57e792be5f83f994aef0e14a7.jpg" width="200" />  

栽培瓶にも深めの排水口ネットを取り付けて、虫の侵入を防ぐ。

<img alt="picture 42" src="images/cebb96aa2f9c84daaf136097e45eb754a94ebf999ea7726959fc330ed982c909.jpg" width="200" />  

栽培瓶には給水パイプと排水パイプ、エアーポンプ用のパイプ（栽培ロボットとは別実装）の三本のパイプが入る。

<img alt="picture 43" src="images/0cac3fe361a5d5bbb8b897521ce45511f09698547ee29ef7966ead3bf112c8c9.jpg" width="200" />  

給水パイプには異物の逆流を防ぐためミストノズルを緩めた状態でつけてある。

<img alt="picture 44" src="images/85acea329ecdb0912cacc6c9af8c00dd0c26c1545c45ece2b6ce1dfb320ee3c3.jpg" width="200" />  

給水瓶と排水瓶も稼働実験位置に配置

<img alt="picture 45" src="images/36c3e80583c6014886883a0c165c601342442fd81cc38044161722963885e26b.jpg" width="200" />  

栽培ロボットに接続し、仮ではあるが蓋をする。ケース穴あけ等は今後行うものとする。

<img alt="picture 46" src="images/07431c3623cf777a970e6dcf71824c9cf1fa683f88464379d7305830db6b97d6.jpg" width="200" />  

一回動かしてみるが、ちゃんと給水は出来ているようだ…が？

<img alt="picture 47" src="images/d3f086301e3ea719cc8a525e8a5e746f826c6a341d25b60f092e3ca263e0aafd.jpg" width="200" />  

排水が空気ばかりで水が流れてこない。

<img alt="picture 48" src="images/79f995aed96e452a1d94e2191686e3f3e512e20982635d89295f695f6b62c5c1.jpg" width="200" />  

どうやらパイプの癖で排水管が水のある底についていないようだ。

<img alt="picture 49" src="images/e9c9628ad760735195a91a6dc77fc4faf56175dceb77ac37d141dddf6626fc9d.jpg" width="200" />  

修正し排水するかテスト。

<img alt="picture 50" src="images/a5ed5de6f10e200a21b8f13bc9bb3fbcd2ebc88a2fb6ddb2ecb8470a43d963a5.jpg" width="200" />  

うまく排水ボトルに水が吐き出された。

<img alt="picture 51" src="images/d8c8d5aa82cc5cd03da797979d29a19e1047247e79a1ccf2c101a5da981c206f.jpg" width="200" />  

ここまでで動作に支障はない。あとは明日の6時半に稼働することを願うばかり。

<img alt="picture 52" src="images/982d73c8fd17d680abbea8e2523550c61e11975c0aa0208211fe94d6a312407f.jpg" width="200" />  

水漏れも起きていないようだ。


# 豆苗の運命
液肥を付加しているとはいえ豆苗の根が持つ生命力と豆部分の栄養素に頼っているため、いつかは再生できずに腐ってしまう。

今回はどうなっただろうか。

<img alt="picture 61" src="images/c132122edb12b93987eda1518459faa4564cf7f4da524eeb6ac7e8f6296b8827.jpg" width="200" />  

家を空ける日数が5日に伸びてしまったが、栽培ロボットは順調に動いているようだ。

<img alt="picture 62" src="images/934c5de5bd4a93d0c1f9de07693052f66f182c6d094c06c79efb8d01002a2bb8.jpg" width="200" />  

防虫ネットから虫が侵入している形跡はない

<img alt="picture 63" src="images/8c247ce0f336f56b690bedbaf842c2fd5aa54bd3724ad49be06fb492fe28bbe1.jpg" width="200" />  

チューブが抜けたりもしていないようだ

<img alt="picture 64" src="images/c23477e49e3d476d5b7339ab7217d5ebb5b977811deabd3f74f0c6ca70c05f92.jpg" width="200" />  

中の苗もまだ生きている

<img alt="picture 65" src="images/1f87770eae3c1353b7e00fbe4ed894a0fd83e97aeeeaa4ea84d2a5cf36bddf2f.jpg" width="200" />  

給水ボトルは中身がずいぶん減ったが少し残っている

<img alt="picture 66" src="images/c92acddfd9896b6cf15b409f70fb9ea4473fdad5c12feb39f7a14acca24380e9.jpg" width="200" />  

排水ボトルは少し変色した水が溜まっている

<img alt="picture 67" src="images/dfdf2049a0d9b8359b6ddf037e5694d366d2f18f637054197caa427e16f68ec4.jpg" width="200" />  

栽培瓶の排水チューブも無事底のほうについている

<img alt="picture 68" src="images/99f3df15b96e57e08611fc27c6f7f6a9f720e9aa066cb2ace0ea1b14fc1711ed.jpg" width="200" />  

給水もできているようだ

<img alt="picture 69" src="images/584dd6c53e51fbb79ba2ff3b6f76d3fbf59b9a1e2ade0b2edf963c7dde7dea83.jpg" width="200" />  

栽培ロボットのボタンを押して給排水動作を確認すると無事に水が流れる

<img alt="picture 70" src="images/41dee1a5660a13c6620241b71703d34051bbc5ea24a2330b439218a87250af0d.jpg" width="200" />  

このタイミングでメタルラックを45x25サイズのものから30x30サイズのものへ変更する。
45x25サイズのものはイベント展示用に再利用する事とする。

<img alt="picture 71" src="images/52aea40f94bda30e46437fb0e1303375bb0ababdfb9fffcd6045a71887a0f4c8.jpg" width="200" />  

メタルラックを交換して翌朝。栽培ロボットも翌朝6時半にはちゃんと稼働していた。

<img alt="picture 72" src="images/a3af1bf249b29d16460b889263ad1f425f3b51e36877dda52622b70cf4767fb3.jpg" width="200" />  

## 水交換してあと3日もたせる
このタイミングにて栽培瓶を含めた水を全交換する。

<img alt="picture 73" src="images/daa2e0771508b3b129e85618d594f3d4ec63b70e8029eb562a09a7afd4996efe.jpg" width="200" />  

メタルラック交換時に排水瓶の水をこぼしてしまったため少なくなっているが、ここからポンプとチューブ内の水抜きのために栽培ロボットのボタンを押して何度か稼働させる事とする。

<img alt="picture 74" src="images/e9d55496f794dfe85b75a74977a27300017fcfd2dc7e8db17902d4c75f747387.jpg" width="200" />  

左から栽培瓶側排水チューブ、栽培瓶側給水チューブ（緩めたミストノズル付き）、排水瓶側排水チューブ、給水瓶側給水チューブ（ストーンつき）

この状態から空気が出てくるまで何回か栽培ロボットのボタンを押して稼働させ水をプラスチックケース内へ排出する。

<img alt="picture 75" src="images/49d4dccefef3aeb6f169cce61a225ab7bc537dbbf67ed49bce30493822ef8550.jpg" width="200" />  

切り口が変色しているがまだ頑張っている

<img alt="picture 76" src="images/d653bc95c746b1920381c91dbd55ca30206f72306f4b81c51910e76f801d25e5.jpg" width="200" />  

枝分かれした成長点からは新しい芽が出ている

<img alt="picture 77" src="images/2f79df5a642158c4dbfb4e7326dcdb21e0e8d8ce8e5787c29c84c8f8a5667c09.jpg" width="200" />  

茎の変色が気になる

<img alt="picture 78" src="images/b170fed14b3c1b11b9cd4dbd89bf07e9d066309fd6a7a9140e7f5ee87b07de6d.jpg" width="200" />  

根は順調にネットを抜けて生えてきているようだ

<img alt="picture 79" src="images/466c7aec5805879ffc66435ee07b79f61c9271953ff71d715d8d07e28ba1991d.jpg" width="200" />  

まだ青い部分もあるため今後に期待

<img alt="picture 80" src="images/f3d46742efca1b0bbdf3f1725011f11c737e84837c504231d60e683bbf7252bf.jpg" width="200" />  

もう一つの苗も同じように見えるが芽は多いと感じる

<img alt="picture 81" src="images/01c6dc4b8dc3fcf0a7968d13871dd79eb2241198a1fb71b4f3d05f3041ff3ede.jpg" width="200" />  

こころなしか元気そうに見える

<img alt="picture 82" src="images/ce374978a4b77fbe1358b42185c698bcb1088e6dd3012829c693991db664eb54.jpg" width="200" />  

麦飯石をこぼさずに栽培瓶を水洗い

<img alt="picture 83" src="images/12ec280b04a951cb05b75eaab26b401ef1ca5ba748670853aadf1bc8a0379e5d.jpg" width="200" />  

少し水道水を入れて

<img alt="picture 84" src="images/2b8b1c4b7fb2ac84258fafd6111590ade6cde5a57fe16c065dd50540436f8665.jpg" width="200" />  

水で流した苗を入れていく

<img alt="picture 85" src="images/9f59d32c8b4f3a61b3d3039ac273aab0903e9f81131220615aed1eeb729b9b38.jpg" width="200" />  

今後は元気に育ってほしい

<img alt="picture 86" src="images/687a34d2fb93f5a149591a33d2eee67f3794ba71150bd15001c85f66aa3af075.jpg" width="200" />  

ラックに設置し

<img alt="picture 87" src="images/cce6dac330afb63d9cdf2842bf7601243c8add7a919d8310d5d1f2a882969b9d.jpg" width="200" />  

チューブを3本挿入

<img alt="picture 88" src="images/5ff108a3c4c714fc8bac13aa50b25d0e8daf79575eb27b8c570e5e343e82b4e7.jpg" width="200" />  

まとめて防虫ネットで覆う

<img alt="picture 89" src="images/e1a1050f9ce3b5d5c86a56351e4a7c03bb0a27caf65cb0cccc80a6b33817266e.jpg" width="200" />  

給水ボトルと排水ボトルも配置し

<img alt="picture 90" src="images/fcbd7f3618f83dbbf75e25cbe6bde83dd09b70a9b0bee043f6dfac4637617da9.jpg" width="200" />  

栽培ロボットの動作チェック

<img alt="picture 91" src="images/1c8833ff5f12bb8ed1516aa03dd4e24359c3b2686534512fb6f06a2671b1b2ec.jpg" width="200" />  

給排水チューブから空気が出た後無事に水が出てきた

<img alt="picture 92" src="images/f8a68d12cfb1490fb998b99089291b3032e1b4135f6cd1bd94dc9d761c74fb9f.jpg" width="200" />  

ここからまた3日間家を空けるため、その間も安定稼働することを祈ろう。

# イベントに向け一度解体
イベント(NT東京)に植物栽培ロボット稼働展示を行うため、栽培ロボットを出発当日の朝に外してイベント会場まで持っていく。

<img alt="picture 94" src="images/7dc8eddfc5d761254b911d6c788fdb8a0a99312c0203620d7b8096cc39a9a8e3.jpg" width="200" />  

ロボットも豆苗も特に変化はないようだ。

<img alt="picture 95" src="images/547a718d9cfb5c55cf9b1fa23b81a1f544c56ade5798081ce7782680458f415c.jpg" width="200" />  

ロボットだけ外してNT東京へと持参する。

<img alt="picture 96" src="images/3b729f0eba9109d0ebddb419e9493c0f11335b83fb6f964eca1fa9484551f231.jpg" width="200" />  

残念ながら豆苗は元気がないのでお留守番。その間はエアーポンプで空気を送るのみの状態にした。

<img alt="picture 97" src="images/6a466228ceef00eab375568ac6f17d30624676e8c02a08519b3dca468b6b8a43.jpg" width="200" />  

でもまだ生命力は残っているようだ。

<img alt="picture 98" src="images/c8a9e91cf9f23910f3715e83348248675dce412426604b239edaf6fabe155247.jpg" width="200" />  

翌日イベント二日目朝も問題なく生存しているようだ。


# イベントから戻って復旧
イベントで展示を行った際、供出した栽培ロボットは展示内容の仕様と栽培稼働時の仕様が異なっていたため、内部プログラム含めかなり改造と改変がされて戻ってきた。
その変わり果てた姿から栽培ロボット稼働状態まで戻すのに苦労した。特に水の配管と水漏れ対策やり直しに…

<img alt="picture 102" src="images/6023eb9994fba7a9f9b2962026a234f4140460e8b79c7cd06137a0007f1097f8.jpg" width="200" />  

翌朝早くから家を空けないといけなくなったので（忙しい…）栽培瓶にはエアーポンプで空気を送りながら液体肥料を添加した水を追加する。

<img alt="picture 103" src="images/e34eb7d3bd240e11a81cd4a6fe9e65b8f3309a1bb923833e101f51b96a7f4a5c.jpg" width="200" />  

四日後ようやく戻ってこられたため栽培瓶の中を確認すると…まだ枯れて腐ってはいなかった！

<img alt="picture 104" src="images/1055d2f86b3136ac9fc5eb226c4273406e0f9fd6a061f491f9173e6131e4d5da.jpg" width="200" />  

防虫ネットを押し出す勢いで伸びている芽がある。

<img alt="picture 105" src="images/0401698fec7656f8ecc64713294ecced44bd18585850cb167d63145a163e05e6.jpg" width="200" />  

この時点ではまだ元気なようだ。瓶から取り出すのが大変なくらい…

<img alt="picture 106" src="images/7c6c693bfa876f5e676f714e8acd327afd91af9221bff652bcaf42fc2a9fe9db.jpg" width="200" />  

何本か収穫する。

<img alt="picture 107" src="images/634c7641b0794c91b57ea77c6a1ec1793d8b2b8fffae547c5f20a412501a4515.jpg" width="200" />  

もう一つの苗も勢いは劣るが何本か収穫した。

<img alt="picture 108" src="images/cd1b9babbd7cb7fdd0145d6f62924a580e1792305bb6730e995e244495578614.jpg" width="200" />  

液体肥料を2～3滴→4～5滴に増やした。これで元気になってくれるといいのだが…

<img alt="picture 109" src="images/7e6c56f2fb1d34283d4cc9e9c20e0acff5c83f6d24d47e89f9766942856a7a77.jpg" width="200" />  

水替え後栽培瓶に入れてチューブを差し込む。防虫ネットをうまく取り付けるのに苦戦する。

<img alt="picture 110" src="images/e41148ccee51bce9fa3f52efb833789134993ca1239b2aab43486e9b788b5e6f.jpg" width="200" />  

プラスチックケースに給水瓶と排水瓶を入れてチューブを通す。ケースはもう少し小さくても良いだろう。

<img alt="picture 111" src="images/66d88cb0faf6099644c732d0cb2fe431ab97d1df91352d772505402d173203eb.jpg" width="200" />  

一部チューブにジョイントを使ってみる。付け替えが楽になるといいのだが…

<img alt="picture 112" src="images/18b31c9231e2323841bb13d6b849177087603fbadfe4357c7dfabaedbd56950d.jpg" width="200" />  

現在の全景である。これ以上カメラを引くと色々写ってしまうのでご勘弁願いたい。

<img alt="picture 113" src="images/19e0a6c067b684b09a8652bca99dc7dab5914840f8b92b5606aa4221ae46a6d3.jpg" width="200" />  

家を空ける前に動作試験を行う。

<img alt="picture 114" src="images/3a3ee4f735eaa6201690df06e01e55cf65a13c16fa86b7fe345233ba6cb325b5.jpg" width="200" />  

うまく水の移動ができているようだ。

<img alt="picture 115" src="images/795c29381c03fa861447fe1595f16a67ffc5268e0e46886290b6a6f28a95f58b.jpg" width="200" />  

排水瓶の中身を捨てて翌朝の正常動作を願う。

<img alt="picture 116" src="images/1d19e07bd0f585903d82cb0427a03c759614943bc8b50edfba7448c2bf913882.jpg" width="200" />  

ロボットとプラスチックケースを並べたらラックの棚板からはみ出してしまった。今後改善する予定だ。

<img alt="picture 117" src="images/6416c326d778c379aca2ad0c898ea03efffb22a507386c41a6e789391b587623.jpg" width="200" />  

栽培瓶側のジョイントから水漏れがあったため接続しなおす。

<img alt="picture 118" src="images/809e203ee97c3ce222a4bc62e55e856b21fd733627755f08e11aebbc5bd287c8.jpg" width="200" />  

苗が無事に生き残ってくれるといいのだが…


何とか稼働状態にできた「栽培ロボット」。しかし運命は更なる強化を望むのであった…

# 真の姿に！？
栽培ロボット供与元の総統から「僕の展示と同じ仕様にしてください。その為のパーツは供与しましたよね？」と要求があった。

確かに以前から総統より専用改造ケースやLED照明を供与されていた。

<img alt="picture 99" src="images/de8503b56051bf84a8275d29a83019ddec0de97c2626d8ceacea2960e3d1b6a5.png" width="200" />  

白衣を着たのが総統である。NT東京二日目の会場展示画像であるが…縦長袋内でミスト噴霧栽培する構想だったためかなり縦に大きいユニットになっている。これを私の自宅で再現せよというのか…

しかし、配管の取り回しと取り扱いに今までもかなり苦労してきた。
これは最終形態ではないとはいえ、大幅な改変と造作を伴う。
もはや栽培ロボットが頒布されても諸兄が再現できるか疑問ではあるが、栽培ロボットを格納するラック周りを大幅に拡張・改装することになった…

追加する部品は以下の通り。

|品目|数量|部位|
|:----|:----|:----|
|栽培ロボット用アタッシュケース|一基|ダイソーの手持ちハンドル付きアタッシュケースを総統が改造|
|LED照明ユニット100V|4本|総統が中国より取り寄せたユニット 1本で正方形1辺を構成する|
|LED照明ユニット用接続角コネクタ|4個一式|LED照明ユニット同士を直角に接続する|
|LED照明ユニット用ACケーブル|1本|LED照明ユニットに接続し家庭用AC100V電源より電源供給する|
|固定用針金|適宜|アタッシュケースや栽培ロボット及びLED照明ユニットを固定する|

また、ここで未実装であったダイソーフリーマルチネット35cm x 35cm とダイソージョイントラック用延長ポール38cmを実装する。

<img alt="picture 119" src="images/ba3a24eba94cc02c3dad207d33b30926d72de270a9fcaf0c3b22dcd6818fa7b4.jpg" width="200" />  

ダイソーフリーマルチネットはワイヤーフレームにも似て奥に吸い込まれるような錯覚を覚える。

<img alt="picture 120" src="images/d680ea3e106cb75aee3cb89c254f3a43f0e119b992845781158d2809f0190b84.jpg" width="200" />  

ダイソーアタッシュケースは穴あけ加工済みのものが供与された。以前出展したオープンハードカンファレンスで総統に黒いファイルケースを渡したらカッターナイフで ~~裂け目~~ 穴？を空けていた時から大きく改善されている。

<img alt="picture 121" src="images/c4baaac99b21c800c9206802e158ef5bc111c8d4fb57df0d46eef2102b59bcfb.jpg" width="200" />  

ACケーブルには間にスイッチが付いている。けしてACアダプタではないため、差し込み端子およびテープで保護されている接続部にはAC100Vが流れている。取り扱いには慎重を期されたい。

<img alt="picture 122" src="images/c8a235479d5eaffce3e949d85f8f75e7438184f33b0d644e88a08c8ff2fe09a7.jpg" width="200" />  

LED照明ユニットは4本使用する。しかしそのままACケーブルとは接続できないため…

<img alt="picture 123" src="images/57566d15e6bead22267280250b4ef33d9cb76d8f01849ced9592ed9e4d1aafee.jpg" width="200" />  

こちらのソケットを使用する。一つのソケットには三つの差込口がありLED照明ユニットとACケーブルを接続する。ソケットは4つありコードで繋がっている。

<img alt="picture 125" src="images/ef646e75459de58e2b275667a6248d0c93fa850e4451da39dbd77e591b60351a.jpg" width="200" />  

接続するとこんな感じである。ソケットの端子はAC100Vが流れるため触れないよう注意されたい。

<img alt="picture 126" src="images/19d8f232ceac81336050a03437eb0ed35bc46d6cd7e45bf2d3b970dc313f8359.jpg" width="200" />  

光らせてみた。形状的に振り回したくなるがAC100Vなのでくれぐれも取り扱いには注意されたい。振り回すなどもってのほか！

<img alt="picture 124" src="images/b27a330539127398243a9d137c99317a73eca2094995eeddfab9b3f1d343a69a.jpg" width="200" />  

ダイソージョイントラック用延長ポール38cmを4本、メタルラックのポールに繋げてポールを長くする。

<img alt="picture 127" src="images/2a24f97d4a296368662e5aa2844b2cc04bf8336e952e7e3ed65e35bc6e4585af.jpg" width="200" />  

同時に栽培瓶の中を確認して水も変えることにする。

<img alt="picture 128" src="images/a8f67fc57d23b55b820a7ca87e5b69f8a48e98695b04988bad792e7d99e06809.jpg" width="200" />  

苗はまだ頑張って伸びている部分がある。

<img alt="picture 129" src="images/126941028d97c336a39fe3d4f0ab4910d2366a754a8c9c3b79833e11005a864c.jpg" width="200" />  

がんばれ豆苗の苗。

<img alt="picture 130" src="images/b7eb472816aa5031ec406586e1487b979426cc2ad5c9571b1f2ea6e30d03b844.jpg" width="200" />  

元気なのは一本だけで残りはあまり伸びていなかった。

<img alt="picture 131" src="images/a9771893375e01e3e15c5270e933837e99c6adc43feebd9891678486c2e1f4e4.jpg" width="200" />  

しかし伸びようという意思は感じられる。

<img alt="picture 132" src="images/e3a63d69d8a638e2cdee1e95b89be0bb9904c89d0330b716ad75b0b3248c6717.jpg" width="200" />  

伸びた部分だけわずかに収穫。

<img alt="picture 133" src="images/3cd96b850e3341e3a9c85f9cf94691972d5b882e47573fec76fd6e4dc86f7efa.jpg" width="200" />  

もう一つの苗は収穫できるほど伸びていないようだ。

<img alt="picture 134" src="images/0f82142f85b4aa656c42bda9aae1cbeef39d4100846fc1fd9322d38abee5be4c.jpg" width="200" />  

青い部分がこれから伸びる期待を抱かせる。

<img alt="picture 135" src="images/12b590afe3ae5250d17454628a0c1083abbf128e3db19c3ed265ec7a5387add7.jpg" width="200" />  

根の方は変色が進んでいるようだ。

<img alt="picture 136" src="images/d9f77e8e2ffb93e8d225546d0cec9b506493aa85163256ac80a9e4d4e8b81ee1.jpg" width="200" />  

水替え後に栽培ロボットの配置とラックの拡張を行うことにする。栽培ロボットは新たにアタッシュケースへと格納する。

<img alt="picture 101" src="images/c6c052aebe2e4564640b1a758627bbe8fc2a15f267e0b547e68110cbff61bcfe.jpg" width="200" />  

チューブの取り回しも見直してアタッシュケース穴から出せるようにする。

<img alt="picture 137" src="images/5b8d8afbb948faf81fbcbae7e19961ee3f2c5970dcb529b108a4825ef35af0ad.jpg" width="200" />  

マイコンと基板の電源供給も穴から出せるように。同じ穴を使ってアタッシュケースと基板を針金で固定する。

<img alt="picture 138" src="images/49cc63ca6106128042aeb325b53ee7b732f821503305202b12c1b1598e0408eb.jpg" width="200" />  

ラックの上側棚板を少し上げポールを延長する。アタッシュケースに入った栽培ロボットをダイソーフリーマルチネットに固定してラックに垂直に固定する。

<img alt="picture 139" src="images/b4777051e4669e75399129e84afb173593ebe4f72bc443cf97ef8e9825a704a8.jpg" width="200" />  

栽培ロボットのボタンを押すためにアタッシュケースを開けているが固定はうまくいったようだ。

<img alt="picture 140" src="images/89f7bc00652bb091d9ce088ac8cdbda6382b1d838c5f3fec08f83c0035dac07f.jpg" width="200" />  

ダイソーフリーマルチネットの裏から針金をねじって固定する。

<img alt="picture 141" src="images/cf01dbced38933638476830fc15ec0b2bf1db91d59aadb191613713da5f53715.jpg" width="200" />  

これから各種瓶と接続する。

<img alt="picture 142" src="images/e823249526a3df96818462cc8f25ca4ccff03509b16be5c65ecb30353502ee77.jpg" width="200" />  

アタッシュケースから伸びるパイプは多い。間違えないようにしないと。

<img alt="picture 143" src="images/4ccc99411afc8bd563a3fc27bc0394cce106bc8e58a946e7c5a6fc3ae31bea3d.jpg" width="200" />  

プラスチックケースは以前使ったものと比べて半分のサイズのものを使ったが、ボトルは十分入るようだ。

<img alt="picture 144" src="images/5d59beadda646585da56e5c3151660b5192e9ce8fc669c1effdb5b4ecb0bb0c3.jpg" width="200" />  

まずは水通し試験の為栽培瓶の代わりに試験用瓶を使用する。

<img alt="picture 145" src="images/a252e58b57749406d4e7b4b6db87b45ab87ca4608585a91f8063bc51dc605192.jpg" width="200" />  

各ボトルとアタッシュケースの間にはパイプジョイントを挟み交換時の負荷軽減を図る。

<img alt="picture 146" src="images/f47cf8a583495bc94579afdb691ace3bf444aec7f637b77db689ae291e3b0c03.jpg" width="200" />  

水通しの試験を行うが、水漏れが起こっているようだ。

<img alt="picture 147" src="images/852edc167c7c3b8b195162d2f745991c947cbada3d61e98c494181cf47fafdda.jpg" width="200" />  

水自体の移動は問題なく行われているようだ。

<img alt="picture 148" src="images/828bf5d329f6ea71a14c1744e0aad9821f0403c48a03396fe63be73cb14fbc58.jpg" width="200" />  

試験用瓶にも水が溜まっている。

<img alt="picture 149" src="images/7300a681a01519d733039de161f6efc9e40be970ff178c2dba480c51f113cafc.jpg" width="200" />  

一方給水瓶からは水がみるみるうちになくなっていく。

<img alt="picture 150" src="images/8247adeeccef536e95a6d6dea1a3b03700c0d9ceb1cfcfbffef6c0ae34bde73a.jpg" width="200" />  

排水瓶にも水が溜まっているようだ。

<img alt="picture 151" src="images/8fbd27b5d7ef4f793fd22a381fcd7cb92cc484192dc553bd4d92be4d3adb4023.jpg" width="200" />  

水漏れ個所を修正し問題を解決する。

<img alt="picture 152" src="images/778dca8f70940efa5919a83901a9b83e1a0058b960d9bf58e2f6b3f8eba46f82.jpg" width="200" />  

問題は無くなったため試験瓶からパイプを外し栽培瓶に通す。給水側が二股ジョイントなのはジョイントが足りなくなったためである。

<img alt="picture 153" src="images/417dd77e321262b653dbeef01bbecb4d84ca05f7525ad6c70160af5e0533f0a0.jpg" width="200" />  

防虫ネットを張りラック下段に格納。

<img alt="picture 154" src="images/1a5574d8c6e3af278ceb8fe3762224576a642c2f418e58d143b10ed37454d836.jpg" width="200" />  

この状態でも通水に問題はないことを確認する。

<img alt="picture 155" src="images/598d851e9ff7ad80fb37b8954a33f62057e3cb9012545b8f74d4284fb885ba39.jpg" width="200" />  

無事に給排水は行われているようだ。

<img alt="picture 156" src="images/d885c2782b055e332567bc9d1a19ec93625a175688806d2465e20893dd93f36b.jpg" width="200" />  

最後に大仕事、LED照明ユニットを設置する。

<img alt="picture 157" src="images/564977bd5294f11705e89185e47bf3f2e1a4a58ae326c7babbc50e7696aee2aa.jpg" width="200" />  

ソケット間のケーブル長さはギリギリ。ひとまず仮止めとしておく。

<img alt="picture 158" src="images/3ad65259c2ef4869a6dace684faa8c0855dd1b63aaa5559663e14168ccc0248a.jpg" width="200" />  

空いたソケットにAC100Vケーブルを刺して点灯試験。水を扱うため漏電しないか結構ヒヤヒヤする。

<img alt="picture 159" src="images/10029336fc30731e50f4df1c922e8d72c84fdf02c90c9575f79bced09ad9d30e.jpg" width="200" />  

一応AC100Vケーブルにはプラグ側にスイッチが付いているため何かあったらオフにできる…？

<img alt="picture 160" src="images/436bcdda5b42ee2ecfb8ecae27d46c663ee26ff99d7afb7293f229e0eb1008fe.jpg" width="200" />  

無事に点灯したようで一安心。

<img alt="picture 161" src="images/5fc8bdc7afece1672b2c8950ed2d1b7704a23b18c236b510580888f540ac50c8.jpg" width="200" />  

制御はまた次回以降になるが、何とか形になった。

<img alt="picture 162" src="images/ff52428f8fd6d96164a118d0701956b47b2bbddaaa83a1c248cc18c00d935f2b.jpg" width="200" />  

LED照明ユニットの裏には、顔のように見える穴が開いているのが…少し面白い。

<img alt="picture 100" src="images/83e8b1e3d4272edfdf3cdda61e04733cf9a33ca3fe6502fb6db6c9c5e501943c.jpg" width="200" />  

LED照明ユニット100Vは動作確認のため栽培ロボットとは別にAC100Vに接続して点灯している。


…組み上げた後、私は心の中で叫んだ。
それくらい、規模が大きくなったと感じる…

豆苗は果たしてどうなるのか！？
# 豆苗、力尽きる…
いくら豆苗でも一度切断した部分からは芽は生えてこない。切断した部分より下の成長点（分け芽）より芽が生えて伸びていくのである。

成長点には限りがあり、無くなれば葉を生やすことができず豆苗は枯れて腐っていく…
前回は家を空けているうちに腐ってから数日が経ったようでエアーポンプの泡が栽培瓶の中を満たすくらいであった。

そして今回…

<img alt="picture 164" src="images/4f0d1f2db2748fd34e3d20ee53f1cbc24d65f4d135563fa618e913bdefec1153.jpg" width="200" />  

朝、豆苗の写真を撮ったときはまだ青い部分が残っていた。

<img alt="picture 165" src="images/f2391a88d45b81296f6775d3f698ebbb92c339306e208f1ac78c4a0f7d2fe03d.jpg" width="200" />  

6時半の給排水もうまくいっており、排水もあまり濁っていなかった。

この写真を撮った後、また三日間家を空けることになる…次に見るときは豆苗も無事ではないだろう…

<img alt="picture 166" src="images/656d734b10ee827fd6873a364168a8bd264c8a54b2d85bab8bb3823539a1213e.jpg" width="200" />  

ここから少し閲覧注意な画像が続くため、収穫した豆苗を炒めた画像を挟むことにする。

<img alt="picture 167" src="images/70e7eeeea7c313939ae5efbbecee9afe3e99b8ff70e81ad61e870078f6cf207c.jpg" width="200" />  

栽培ロボットはうまく動いているようだが…

<img alt="picture 168" src="images/55423f9c119c733faa0a1730518c9081e72493638d04ffeaa1ada0545b9a7c2d.jpg" width="200" />  

緑の部分はかなり少なくなっている。

<img alt="picture 169" src="images/1e68298d9f3e35a841efda88a2b7e392939d829489585a68c24af9326b6b2841.jpg" width="200" />  

水漏れはないようだが、

<img alt="picture 170" src="images/4d7fea7699448dcb80a847c39e83d42a799bfda583cb81574529eaf93c376183.jpg" width="200" />  

排水瓶の中身は少し濁っているようだ。

<img alt="picture 171" src="images/3634ed8d566498271d803d2f6521eab401bed0373c7b83551d9d9e86c2fb9225.jpg" width="200" />  

栽培瓶の中も豆苗の苗が茶色くなっている。緑の芽もしなびてしまった。

<img alt="picture 172" src="images/9766e3fcc9967aba0d465f181c16048044f9c253852471d74fb64bf1f7fdc722.jpg" width="200" />  

翌朝見てみたが、排水瓶の中身は更に濁ってきた。

<img alt="picture 173" src="images/3b06721baf2e3501a88fe0c4617236d0762ffce1301098e8472e94fb07643352.jpg" width="200" />  

排水瓶の防虫ネットに洗濯ばさみをつけて隙間をふさいだが、コバエが周囲を舞っていた。

<img alt="picture 174" src="images/b40113b28e4854e5ded645d6caefa3048f8dc57a4d528a75ee7fef232c410955.jpg" width="200" />  

栽培瓶も茶色く濁っていたため、栽培ロボットのボタンを押して排水を何度か行う。

<img alt="picture 175" src="images/99a814a36073821b65c093da6d5fa04ca745103ed064a98002a00aa1ec6ca0c5.jpg" width="200" />  

粗方水は抜けたが豆苗の苗は茶色い。もはや腐ってしまったようだ。

<img alt="picture 176" src="images/e1479759b9e6ffabd182ca43f34eac64fde9a165b398adf943d4963036ca4d25.jpg" width="200" />  

残った水にはエアーポンプによる泡立ちがみられる。

<img alt="picture 177" src="images/a7d64a33f10441ea6cdce3bfce1b9bc22763a5345384221f29541c0679c61744.jpg" width="200" />  

残念ながら、今回の苗は処分することにした。

<img alt="picture 178" src="images/d59871457cb2415ca952f8d784366e7cf92d264c7c92b9b308d98b576e13c0e5.jpg" width="200" />  

水の濁りが進んでいる。

<img alt="picture 179" src="images/474fdcd3771dbb668de6f909e71a19f71c836cd394f52dcc96643130d511c7e6.jpg" width="200" />  

取り出した苗は少し匂いを放っている。

<img alt="picture 180" src="images/bd4c3a210ac59da5b8770be28173976c5b59fbae2d3792207bb3dfcba47667b5.jpg" width="200" />  

僅かに生き残った芽もしなびてしまった。

<img alt="picture 181" src="images/7737097d924aeeba8ebd9224c38c8b4ee1ab3b0c09decbcde9af0c35ec7b9d28.jpg" width="200" />  

こうなると、もう収穫どころではない。

<img alt="picture 182" src="images/bc9f20374875b2adf20b003ea732f72fe2def63f7e383436557b9b1090d1e2a6.jpg" width="200" />  

もう一つの苗も取り出す。残った芽も元気がない。

<img alt="picture 183" src="images/5cc9898f6b73302bfcee2249fd0c06b70601e1d1d0bd95ce8002c294d39c92a0.jpg" width="200" />  

腐った匂いと青臭い匂いが食欲を失わせる。

<img alt="picture 184" src="images/dd277edf5a2282d48bd98b64dc6060c4973d6a73428a1cef474ba3e03c852cc5.jpg" width="200" />  

生命力の無い茎はかろうじて形を保っている。

<img alt="picture 185" src="images/7a94a361b6ed8f946b034bc6bfe311636b835cb3689b2ed6d66d3f6a3531e322.jpg" width="200" />  

葉はもはや光を受け取る状態ではない。

<img alt="picture 186" src="images/dc4d823e88eeb622cff0570fa62d67cea09b0bd73739cb766c620a174c519542.jpg" width="200" />  

根の部分の黒い豆皮は中の豆から完全に外れてしまっている。

<img alt="picture 187" src="images/f3c2e2dec03f4b4b09425ac3019b226ad24e07faa2349a63f4d138963a209e7e.jpg" width="200" />  

根はまだ十分に張っているが、これから生き残るのは難しいだろう。

<img alt="picture 188" src="images/ddb8ab2fa06ca41bf898e28e420aefe9ee0870a813e41afe337e80a7f787c74f.jpg" width="200" />  

一晩でこれだけ変わるのも、タイミングというか寿命なのだろう。

<img alt="picture 189" src="images/57826aa38bb166a118bb2a8c4ad6ed8e1c2da080a00dccfef54e93e1986e3591.jpg" width="200" />  

苗を廃棄し栽培瓶やパイプを熱湯消毒する。麦飯石も湯通しした。

<img alt="picture 190" src="images/a22aeb36bcdc4c84f5d803e867368535054a81e75ecab5a8e33d4cae09f56831.jpg" width="200" />  

そしてこの写真を撮った後、豆苗を新しいものに交換した…

<img alt="picture 191" src="images/a08cdd69825fa66c6d003c911017a447787ad8ff13fab40aeb172a8e0bdc58df.jpg" width="200" />  

新しい豆苗の話は、もう少し後にしようと思う。

<img alt="picture 192" src="images/6ba66db4df884cbc9f87d2b60d0ace7660b1f5ff5f6f35732e3816344d7ce5f3.jpg" width="200" />  

パイプジョイントのおかげで栽培瓶などの取り回しがしやすくなった。


# 総統から頒布される（予定）のキット内容とそれ以外に揃えなければいけない機材


栽培ロボットキット（予定）とそれ以外に揃えなければいけない部材は以下の通り。

<img alt="picture 101" src="images/c6c052aebe2e4564640b1a758627bbe8fc2a15f267e0b547e68110cbff61bcfe.jpg" width="200" />  

栽培ロボットキット（予定）には基板とパイプまわりの部材が付属する。
頒布予定サイトはIoTLT SHOP

(https://iotlt.myshopify.com/)

である。

LED照明ユニットは一般店舗で販売されていないがキットに含まれないため諸兄で用意されたい。
今回の原稿ではLED照明ユニットは栽培ロボットには未接続未制御であるが今後制御できるようにしていく。

## 栽培ロボットキットを含めた部材一覧
|品目|数量|入手|内容|
|:----|:----|:----|:----|
|栽培ロボットキット（予定）|一式|IoTLT通販頒布|穴あけ加工済みアタッシュケースと12VACアダプタとチューブ太細計3mにウォーターストーンとミストノズルとパイプジョイント4個付属|
|LED照明ユニット100V用|一式|店舗販売無し|キットにリレーが付いていれば100VのものでOK コネクタとACケーブル付属|
|LED照明ユニット12V用|一式|店舗販売無し|キットにリレーが付いていなければ12Vのものを栽培ロボットの端子に接続して使用|
|ダイソージョイントラック用棚(II型)29cm × 29cm|4枚|ダイソー|計画ではラック上端に2枚使用し細長いビニール袋上部を間に通して固定する(今回栽培瓶を使用の為袋は未実装)|
|ダイソージョイントラック用ポール39cm|4本|ダイソー|ラック下部に使用|
|ダイソージョイントラック用延長ポール38cm|4本|ダイソー|ビニール袋を使う際にラック上部に使用(黒いポール部分)|
|ダイソーフリーマルチネット35cm × 35cm|1枚|ダイソー|背面に固定し栽培ロボットを取っ手付きアタッシュケースに入れて吊り固定|
|ダイソージョイントラック用固定部品|3パック(12個)|ダイソー|ポールにつけて棚を固定するのに使う|
|インシュロック|1袋|ダイソー等|チューブを接続する各所に使用し水漏れを防ぐ|
|シールテープ|1巻|ホームセンター等|水漏れが酷いときに適宜使用|
|給水ボトル|1本|ペットボトル等活用|液肥を1～2滴添加した水道水を入れて使う|
|排水ボトル|1本|ペットボトル等活用|排水が入るため給水ボトルより大きめが望ましい|
|栽培瓶|1本|ホームセンター等|栽培したい植物の苗を入れて使うため口が大きいもの|
|プラスチックケース|1箱|ダイソー等|給水ボトルと排水ボトルを入れてラック棚に設置すれば水漏れ対策となる|
|液体肥料|1本|ダイソー等|6-10-5ハイポネックス同等品 水に添加し植物の成長を促進する|
|麦飯石|1袋|ダイソー等|水の汚れを抑制する|
|排水口ネット|1袋|ダイソー等|ボトルや瓶の口を覆う防虫ネットや苗を分けるのに使用|
|輪ゴム|1袋|ダイソー等|防虫ネットを固定する際に使用|
|エアーポンプ|1式|Amazon他通販サイト|栽培ロボットとは別に魚飼育用のものを常時稼働し空気の循環も図る|
|固定用針金|適宜|ホームセンター等|アタッシュケースや栽培ロボット及びLED照明ユニットを固定する|



# 栽培ロボット未使用時とどう変わったか
前回の栽培ロボット未使用にて豆苗を栽培した際は、4～5月だったため室温が25度程度とそれほど上がっていなかった。

しかし今回は時期を見たとはいえ8月末から9月にかけて栽培を行ったため、猛暑により離室時の室温が30度を超えたのは事実である。35度を超えた日も多かった。

そのためか切り口の変色が速くなった可能性がある。

<img alt="picture 93" src="images/40635fad96ff080606aa9e242060731f16846f9ec1facb8bb4fc6ae836ef5c62.jpg" width="200" />  

こちらは前回栽培した時に7日経過したもの。株切り口の変色は始まっているもののまだ青さを残している。

<img alt="picture 80" src="images/f3d46742efca1b0bbdf3f1725011f11c737e84837c504231d60e683bbf7252bf.jpg" width="200" />  

こちらは前出した今回栽培した5日＋1日で6日経過したもの。株切り口が明らかに茶色く染まっている。成長も遅いようだ。

このことにより、栽培ロボットを入れ水環境は改善したにもかかわらず室温上昇により豆苗の苗が弱っていると考えられる。

# 時は戻せない。だから腐る前に対策を

今回は栽培ロボットを使用して長期の離室に耐えられるか検証してみた。
しかし水環境よりも高温障害のほうが影響が大きいのではないかという所感を得た。

今後は室温が同程度の環境になるまで豆苗の苗を何度か使用し影響を検証していこうと考える。

# 気温が落ち着いてきたため再始動

最高気温が下がったため、再度豆苗を栽培することとする。
前回のターンと比較して生育状況がどう変わるかを観察する。

# 今回の豆苗栽培ターンで変わった・変えたこと
- 最高気温が29℃を下回った
- 収穫時に分け目のすぐ上を切るようにし成長点を残す
- 水位を1.5cm～2cm→1cmに下げた
- 液体肥料を4～5滴→7～8滴に増やした

# ターン開始！栽培スタンバイ！

前記の通り、豆苗の苗を新しくして次の栽培ターンに移行した。

<img alt="picture 193" src="images/296ef0d6b507562b365394c859af3fa10c84cc711342613d2da1928e3b15a741.jpg" width="200" />  

苗を使うため切除した葉茎は煮込んでおいしく頂く。

<img alt="picture 194" src="images/bf97a951a7229f34034dfa4160593c85327f1e0f7a2606f6bca5965faeb65e46.jpg" width="200" />  

今までと同様に栽培瓶へ苗をセットするが、LEDユニットのおかげで今までと違って見える。

<img alt="picture 195" src="images/20b1d5bd45723245ff4f10767dfd890739bc4feb808ff88c968a192ef2003220.jpg" width="200" />  

パイプジョイントが足りなかったため三又ジョイントを使用する。給水を二本のパイプに分けて行う形にした。

<img alt="picture 196" src="images/ba399e684e33e8c1917190fe7b22f0f5e24cf368b93da714eb0737d3d3fa02aa.jpg" width="200" />  

セットしてから4日経過したもの。

<img alt="picture 197" src="images/c99cdb9a2614a8a7b039d4cb618709a0e36d8cb787863e06acdee8f8329fdace.jpg" width="200" />  

この時点ではまだ元気だ。

<img alt="picture 198" src="images/8c91aeff85da38cf36453065794447e6ea0087af7135edd12719e020820d38d6.jpg" width="200" />  

一部の茎は長く伸びている。

<img alt="picture 199" src="images/77b60e7fa235f8aa3426d58ade03fe43f01aa5ce1bdc0635fcf6324f00da39a5.jpg" width="200" />  

根もまだ新鮮で白い。

<img alt="picture 200" src="images/c0073fa115a0f342f58a5fa114148eb86be44f171ebf76ac252bdb0df32940cc.jpg" width="200" />  

もう一つの苗も長く伸びている茎が確認できる。

<img alt="picture 201" src="images/3cbdf18e877db8fe6208e71a1fe93fc724837e77bdb6b973a9c840903e5deb06.jpg" width="200" />  

育て続ければ蔓となり花を咲かせるだろうか。

<img alt="picture 202" src="images/f6614c81aada8c5cf62fe24c442ea8b25a29f1a91d176b16febb56e4d0a37d94.jpg" width="200" />  

切り口もそれほど茶色くはなっていない。

<img alt="picture 203" src="images/05b3d0ba3747052314ba7df78437490ae25e65fc7b8bfb5b4dbfb9b516d6aac7.jpg" width="200" />  

もう排水口ネットを根が突き破っている。

<img alt="picture 204" src="images/87bb3152d5b61fb071034df1800ad3a685cc6bab1e337bad017b0316971cd741.jpg" width="200" />  

栽培瓶を洗って麦飯石もネットに入れてきれいにする。

<img alt="picture 205" src="images/dc7a28f14e179746388783c8e85475740b790551256cb10b99ef27bec3ccca45.jpg" width="200" />  

水量は抑えめなのであまり根が水につかない。

<img alt="picture 206" src="images/596a8719aa57a95c4867635c0830dffcfcae63a1876dc7fde524f38b4b494bde.jpg" width="200" />  

栽培一回目の収穫。

<img alt="picture 207" src="images/1e364b5f319eb90d00a8bdb1157445f08cda5434b64b6bfeefcabefdae6f403e.jpg" width="200" />  

成長点である茎の分け芽をとらないようにしたため伸びた茎が少し残っている。

<img alt="picture 208" src="images/f2a0f0b5ffc7741f6f0173a1ead244e248537eb592434c9b5fb78369b57ab931.jpg" width="200" />  

この状態でまた4日間家を空ける。

<img alt="picture 209" src="images/a19d607f34c51bd2b4defc5edeec925ee7af7b837cd7bbb4b42d6ae388c14916.jpg" width="200" />  

明かりは窓からの自然光と、在室時の蛍光灯及び以前使用した一灯LEDライトである。

<img alt="picture 210" src="images/564f354dea8e0f199434c3bfbe54edca5668a826b1105b33d737bc06916141ee.jpg" width="200" />  

家を空ける際は自然光のみとなる。

<img alt="picture 211" src="images/402c4e7290050e720847a77e48eb8c6e37b59e40c30168eaf19996548d4a1dc1.jpg" width="200" />  

基板のテストボタンを押して通水テスト。概ねうまくいっているようだ。

<img alt="picture 212" src="images/bc26973854f2fb9a47516b3e65f37e6a870eb5aa20ccd686b884d626e74d112f.jpg" width="200" />  

栽培瓶へと給水瓶から水が吸い出され、排水瓶に水が吐き出されていく。

<img alt="picture 213" src="images/c9dfe22a44439a7f2b437dff83c12c5c26bc4234cf66a3fdf987a713bc8d9d6f.jpg" width="200" />  

4日後排水瓶には水が大分溜まってきた。

<img alt="picture 214" src="images/83c46028d0bfa7c660c225e9b80b051c29f5b71d3238530f7a53a71878c1c964.jpg" width="200" />  

順調に成長しているようだ。

<img alt="picture 215" src="images/48b3f8458d8937cbf2243345e71593501c143d54a9ff09cfe6b439d4713c6808.jpg" width="200" />  

防虫ネットを外すと葉茎が勢いよく出てくる。

<img alt="picture 216" src="images/6d244b084e33888818d16a3561c2a617e7c407dfe5e467d978f9a194f39ec961.jpg" width="200" />  

伸びている葉茎の数が増えたように感じる。

<img alt="picture 217" src="images/6e551d1bebdcd16fc33c33f595477977f9f23cc9344269313581bc348eba4a92.jpg" width="200" />  

もはやあらゆる方向に葉茎は伸びカメラの画角に収まらない。

<img alt="picture 218" src="images/866c7ab99044365df03a19ec0ee68c7de8a4bb2cc0915b19c17ca4e34c770b61.jpg" width="200" />  

もう一つの苗も本数は増えている。

<img alt="picture 219" src="images/8edeff6a45628ed4a6c813c3a55b44b2dc4f0e8b4f6cec2614766e3a76775f24.jpg" width="200" />  

こちらは一方にまとまっているので、日照の関係があるかもしれない。

<img alt="picture 220" src="images/47f59b632a8fbf330b863e74fef064de7589baa3487f1cf79d7d5e69eaa882c6.jpg" width="200" />  

栽培2回目の収穫。

<img alt="picture 221" src="images/f73cb725fc9e80bad2ce20f7d4a546c5006b5502f5721fd97b03df28cae24396.jpg" width="200" />  

分け芽を切り取らないよう慎重に葉茎を切る。

<img alt="picture 222" src="images/58e978cab48603031b8ba2c8e981e525acbb8f1e7436e1ced890c6accfab962b.jpg" width="200" />  

葉が残っているため次も元気に育ってくれると期待したい。

<img alt="picture 223" src="images/19c02f2ffa7ca5479edd1a0f692cd2a4ed5d0c3e0edbe22c717dfc031a930d92.jpg" width="200" />  

栽培瓶に入れなおした時点で結構茂っているように見える。

<img alt="picture 224" src="images/96cea10ddf2c06faad8152430cce4271997ec2f78f20f7df67acf813a0d98e7f.jpg" width="200" />  

上から見ると茎が多いのでそこまでではないのだが。

<img alt="picture 225" src="images/b9d3c38732074260dd0548a9740256674775d71c84b78c2abd988ac79c24a90c.jpg" width="200" />  

また4日間家を空ける。元気に育ってほしい。

<img alt="picture 226" src="images/25d507d70ffc1731b72cc7e803d5d6470cfb945b4b5c06cda23c1034067fa29c.jpg" width="200" />  

4日後、排水瓶が溢れんばかりだ。

<img alt="picture 227" src="images/66593a2c6c55486f2ac3b26e4a1e8f4f41bb5bb3f102c2e914120a467a391414.jpg" width="200" />  

苗もまだ生命力を失っていない。

<img alt="picture 228" src="images/13cb189d138ef24334b7ed7aafe91f742f2950a85f59e577d8385c6d9c62a2cd.jpg" width="200" />  

このタイミングでL字型パイプジョイントを入手したので三又パイプジョイントと交換する。

<img alt="picture 229" src="images/f02fdf65ab8b7678aa32d0fa6c25bb6d70ef6779200e5f57fe66f1fa02762b05.jpg" width="200" />  

栽培瓶の底側に見えるのがL字パイプジョイントだ。

<img alt="picture 230" src="images/5b33f5593a2f825987e6484813f9508647322073d9c2bb0ed39a0e641ffd892c.jpg" width="200" />  

もはや何処に伸びようとしているかわからないくらいの成長だ。

<img alt="picture 231" src="images/be427f1a747bf7c389c1d4cab1ad6ab16ad0b2a62822ed74334f00cebae37681.jpg" width="200" />  

根もまだ新鮮だ。

<img alt="picture 232" src="images/45e6905465233ec83fdc367fc38d50b60b6fee038375bc532cc2c4fa7799c11b.jpg" width="200" />  

もう一つの苗は少し元気がない。

<img alt="picture 233" src="images/f3ccf0ae5035540b49f7c95d3a9abdf5595e7b2b90a83f526de6bb4507f2fa7e.jpg" width="200" />  

根が茶色くなりつつある。

<img alt="picture 234" src="images/1bdaf23d2c943c9587d113b158341b66041134568aa141966be4a0f1d4b49fd2.jpg" width="200" />  

それでも成長は止まらない。

<img alt="picture 235" src="images/4252922657028e218c3da2b575fc0b446c115fd5233a034c29f722bd3a5400bb.jpg" width="200" />  

栽培瓶と麦飯石を洗う。

<img alt="picture 236" src="images/095269b8af786ea29c15faa1846f744ea7b57b6ded992f205df2a38f9b84d758.jpg" width="200" />  

栽培3回目の収穫。

<img alt="picture 237" src="images/c3acf6046e3dae1db91d28a357a622c4308b534f1810256fda9c433e5951b305.jpg" width="200" />  

奇麗に切りそろえられた印象だ。

<img alt="picture 238" src="images/b8260e5b43174b4d1689922a233c942dad71ca7e0a7262e3bd856a180467cb2f.jpg" width="200" />  

上から見るとまだ生命の息吹を感じる。

<img alt="picture 239" src="images/a9ba938a0ee99ff46f3c2df4e6377a84e382bf0aa462ee79bcdeb3f0af620150.jpg" width="200" />  

しかし根は確実に茶色くなっている。分解すべきだろうか。

<img alt="picture 240" src="images/5679a37013d245cf478082b6d8bcbeb1713fc57a75bcab0b053b49b6fa3440c1.jpg" width="200" />  

もう一つの苗は切られても元気を失っていない。

<img alt="picture 241" src="images/7abdb1026a45efc63f5ecca2b0cb4358e9f50b00946b34701af2cac83bdf9ad1.jpg" width="200" />  

ここまで元気だと栽培瓶を分けるのも一手かもしれない。

<img alt="picture 242" src="images/1dd63b096f773a3c4cc20105a09ab7081f8328166fc8ed8b13bd198212a641f3.jpg" width="200" />  

根もまだ白さを残している。

<img alt="picture 243" src="images/3068f5eefe95c238672a1a6358f67a31438fce72c1e383190549a63d1ba3b1b2.jpg" width="200" />  

栽培ロボットのケースを開け通水テストを行う。

<img alt="picture 244" src="images/83e13e647132e3173780514d7f4f0e3903682c7cf5efa33ef4b7a90abc93a737.jpg" width="200" />  

今回は家を空けて3日間で帰ってこれた。まだ元気でいて欲しい。

<img alt="picture 245" src="images/f54f0861770f1a43fedc5cf9cbf0948f556fbbd5f4568393f2c208dad3090e03.jpg" width="200" />  

流石に生命力も落ちてきているのを感じる。

<img alt="picture 246" src="images/ffa6ec951f80b83d9b5d00047d0acb02431644d4d29189c4c75e07cac5035b2a.jpg" width="200" />  

でも、まだ枯れてはいない。総統からは早く区切りをつけろとの催促があるが…

<img alt="picture 247" src="images/caecb3fb1fa4762f1e6bd79b89595c0341138c45f908f32cbfed917884a496ad.jpg" width="200" />  

芽の伸び方に明らかに差が出てきた。

<img alt="picture 248" src="images/d7e01f914ef4b6bfbef14b4d091d71afc277bb8f9be2407fecc32fae95544e59.jpg" width="200" />  

根も黒く匂いもしてきた。水道水で洗うとき願いがかかる。

<img alt="picture 249" src="images/20497b4846656ffe046be4ca4b4b35e9031b3b4f4da5b161784591abda7664a4.jpg" width="200" />  

この状態でもまだ葉は光を受けようと必死だ。

<img alt="picture 250" src="images/82d50bce7150fd89143143ccd4706f74cc4d6514d23c37380c4fc1780d2ab830.jpg" width="200" />  

もう一つの苗も勢いはない。

<img alt="picture 251" src="images/fdefd76c46191f120f7b9620ea5783dacb7fc0ac611919818cd5cf414033e4ea.jpg" width="200" />  

根がまだ白さを残しているのが救いだ。

<img alt="picture 252" src="images/adb2846b48e7fc7bd3e8c8d9f985eba8863d6e8ce4cc54ebce69ffb437510b13.jpg" width="200" />  

数本の葉茎が頑張って伸びている。

<img alt="picture 253" src="images/5b75a63c11f526c31fd827ff17f1534558b333fe56bca614c2f74c50f418b880.jpg" width="200" />  

栽培瓶と麦飯石を洗いもう少しの生存を願う。

<img alt="picture 254" src="images/1ab513729455f6b670a3b118e20f34a5eabec5234aa3f02318fcf153329e09d1.jpg" width="200" />  

栽培4回目の収穫。

<img alt="picture 255" src="images/c9eb510ffb4f292ee341a2a639c463bb92845915b133b588e26ee490c2151b8b.jpg" width="200" />  

せめてあと一回は収穫したいものだ。

<img alt="picture 256" src="images/9c26e231fef9a62da70db961aa2377ac1ef909c09070300222927026a8e6ebed.jpg" width="200" />  

緑はまだ残っている。

<img alt="picture 257" src="images/fa9729d6b795cb208c62426a0665304c3754b935d796cf4fd319bdfb5e247b05.jpg" width="200" />  

祈るようにして家を空ける。

<img alt="picture 258" src="images/872d3b812835ef553c616a196a0d89824d3bde59e6530f77d462af379e0fd9fc.jpg" width="200" />  

収穫したぶんは水洗いし野菜炒めにした。

<img alt="picture 259" src="images/caca4f94dd7e640650ecd8e070d7e73977333f4a267a71c8086fd4fd11654c9f.jpg" width="200" />  

3日後戻ってくると部屋に匂いがした。

<img alt="picture 260" src="images/ba34a44ccaabb288fce0c61d9329ddb86579806baaeb8de1161759dfae8ba5d5.jpg" width="200" />  

明らかに栽培瓶の中は色が変わっている。

<img alt="picture 261" src="images/aedab5b7aea6c8626cdd678128d034098a58d007104430f76990c9b206ecf8eb.jpg" width="200" />  

まだ緑の部分は辛うじて残っているが…

<img alt="picture 262" src="images/9af9325d6ea0be5c871936afb03d725ed43dc79a0a1a5ea68ae1e04362581925.jpg" width="200" />  

成長が明らかに遅い。

<img alt="picture 263" src="images/dd09c150a0632b6f8176e97288d8b49d88a3c9e8c95c01ae5938ff2a4c46c9b7.jpg" width="200" />  

葉が少なくなっている。

<img alt="picture 264" src="images/b2a8c8a684025c6a35dd284d63d3110592b8a05e5d41e311160022b1154f5ac3.jpg" width="200" />  

苗も葉が減り茎ばかりになっていた。

<img alt="picture 265" src="images/41dcc8ec7831fc46b75b3caccb620ab1804a1aa4badef720ab6f92aed177691c.jpg" width="200" />  

根も全体的に茶色い。

<img alt="picture 266" src="images/c1439c504b4e11a950988e9bb221ee1325fbbeb6610a7fabe94848ef8d436621.jpg" width="200" />  

もう一つの苗は完全に役目を終えた感じだった。

<img alt="picture 267" src="images/fe3865ad31fcfc42ca686e2d7aac18d0d0eb5324a4dbc01d256c8a3f9df13d48.jpg" width="200" />  

もはや黒ずんできている。匂いもある。

<img alt="picture 268" src="images/227c8fba6c25d23a6b4e9e9f70e46113afe12f656ea1061b89853f9b667ad331.jpg" width="200" />  

今回の5回目収穫にて、栽培試験を終え残念だが苗は処分することとする。



# まとめ　

高温障害に関してはまさに農業全体で直面している問題であり、高温に耐えられる品種が出回るまでは各自空調の稼働により対処していくしかないのが残念ではある。
もし解決できる方法が見つかればまた筆をとろうと思う。

今回、豆苗を入手する際帰宅が深夜になり店舗にて売り切れになってしまったケースが発生した。
今後も作物の生育や物流の問題によりこのようなケースが増えると予想される。
もし、このことが我々の食生活を深刻に脅かすことになっても何とか生きられるように。
検証を続けていこうと思う。



# 引用資料


busyoucow,「宇宙栽培試行のための発芽試験記録」Journal of SpaceFarm Vol.2 2025-1, 秘密結社オープンフォース, 2025

https://github.com/busyoucow/SpaceToumyou/

busyoucow,「宇宙栽培試行のための栽培ロボット起動及び構造物と配管組み上げ記録」
  (https://github.com/busyoucow/SpaceRobotFarmTest01) 

nanbuwks, 「栽培ロボットをインストール 1st」
https://qiita.com/nanbuwks/items/37bffef16036937eecc3 

