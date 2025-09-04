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
H3ロケット打ち上げに関するTV番組が放映され、宇宙関連イベントも行われ宇宙開発機運が高まっている時に、それは来た。

「みんなをひみつ道具でハッピーにするっピ」（意訳）

政治も経済も国際情勢も混迷を極めているこの最中で、それは清々しい一服の清涼剤にも感じた。
今は2025年である。街には大阪万博のキャラクターが溢れ連日猛暑が報道されている。

総統よりひみつ道具（栽培ロボット）をキットで受け取って1年以上。

都心の広場で栽培ロボット基板を実装確認したり（その後熱中症でダウンした）

乾燥大豆から水で戻してレンチン調理したり（乾燥大豆まだ残っている）

年末にロボスタディオン (@robostadion) ではんだ付けの匠の技を目の当たりにしたり（御徒町の海産物は美味しかった）…

本当に色々あった。

Jaxaが月面に向け有人ローバーを打ち上げるまで、あと6年。

我々もそろそろ目に見える成果があってしかるべきだろう。
と、いうよりこのままでは宇宙市民として生きる時代に間に合わない。

能登半島の復興も気になるが、身体も脳も1セットしかない以上リソースは限られている。
よりよき世界線の選択した未来に向けて、今筆をとる…

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


# ハッピーになるための計画
<img alt="picture 8" src="images/ef6ebe20c055144f66d10459334603c2ba3e393739f2ae7c4de6488cedb3a044.png" width="200" />  

宇宙空間にて長期滞在する場合、打ち上げコストとの兼ね合いにより新鮮な食料の現地生産による確保を検討する必要があると考える。
また昨今災害や気象不順により農作物の生産に不都合が生じ、物流危機とあいまって新鮮な食材の確保が安定してできないという事態が増えつつある。
令和の米騒動はもはやフィクションではなくなった。

 ハッピーになるにはまず食事からと考えるッピ。…もとい、

食事の確保は人間の幸福に関して大きな比重を占めるのは否定できないであろう。

そこで、実践が比較的容易な簡易的植物栽培システムを稼働させ実証実験するものとする。

また、これにより数日間離室した際に栽培中の苗を寿命延命できるか試行し検証するものとする。

上記の写真は以前行われたイベント「オープンハードカンファレンス」にて実稼働ではないが栽培ロボット動作デモを行った際のものである。

詳細は

宇宙栽培試行のための栽培ロボット起動及び構造物と配管組み上げ記録
  (https://github.com/busyoucow/SpaceRobotFarmTest01) 

 に掲載されているため興味があれば参照して欲しい。


# 必要なひみつ道具設置機材を組み立てる
アニメや漫画ではないのですぐ使える状態のセットが販売されているものではない。
しかし、使用する部材の大部分は100円ショップのダイソーで入手できる。
詳細は上記 (https://github.com/busyoucow/SpaceRobotFarmTest01) に記載されているが…

ちゃんと機材リストをここにも記載するっピ。

## 必要な部材リスト

|品目|数量|部位|
|:----|:----|:----|
|ダイソージョイントラック用棚(II型)25cm × 45cm|2枚|ラック上端に2枚使用し細長いビニール袋上部を間に通して固定する(写真では袋は未実装)|
|ダイソージョイントラック用ポール39cm|4本|ラック下部に使用|
|ダイソージョイントラック用延長ポール38cm|4本|ラック上部に使用(黒いポール部分)|
|ダイソージョイントラック用バスケット棚25cm × 45cm × 6.5cm|1枚|ラック最下部に使用し栽培瓶を保持|
|ダイソーフリーマルチネット35cm × 35cm|1枚|背面に固定し栽培ロボットを黒いファイルケースに入れて吊り固定|
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


# そして、ひみつ道具登場

そしてこれが総統より供与されたひみつ道具。栽培ロボットである。

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

## ひみつ道具関連の必要な部材
栽培ロボット以外は100円ショップやホームセンターにて調達できる。

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
|麦飯石|1袋|水の汚れを抑制する|
|排水口ネット|1袋|ボトルや瓶の口を覆う防虫ネットや苗を分けるのに使用|
|輪ゴム|1袋|防虫ネットを固定する際に使用|
|エアーポンプ|1式|栽培ロボットとは別に魚飼育用のものを常時稼働し空気の循環も図る|

また、今回は異物混入防止のため、給水側にチューブ用ウォーターストーンと緩めた噴霧用ノズルを付けているが必須ではない。

# タコじゃないけど配管縦横無尽
配管は以前の記事()で接続して栽培ロボット動作展示で稼働させたが、配管からは水漏れを生じている状態であった。

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


# 実際におはな！…じゃなくて豆苗を栽培してみよう
ドクダミの花ではなく美味しく食べられる豆苗を栽培ロボット管理のもと栽培していく。

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

# ひみつ道具の導入
そしてこの後、家を４日空ける必要に迫られた。

今こそひみつ道具…もとい栽培ロボットを実際の栽培で稼働する好機である。
記憶が世界線の海に没する前に、設置する過程をここに記すものとする。

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

このタイミングでメタルラックを45x25サイズのものから29x29サイズのものへ変更する。
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

# 栽培ロボット未使用時とどう変わったか
前回の栽培ロボット未使用にて豆苗を栽培した際は、4～5月だったため室温が25度程度とそれほど上がっていなかった。

しかし今回は時期を見たとはいえ8月末から9月にかけて栽培を行ったため、猛暑により離室時の室温が30度を超えたのは事実である。

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

# まとめ　～2025年の君たちへ
いつか、「あの頃は～」みたいに語られる日が来るかもしれない。
その時に失敗を重ねて世界の動乱に巻き込まれているか、
失敗から学び一つ抜けられるか。

世界線は常に移動している。

高温障害に関してはまさに農業全体で直面している問題であり、高温に耐えられる品種が出回るまでは各自空調の稼働により対処していくしかないのが残念ではある。
もし解決できる方法が見つかればまた筆をとろうと思う。

今回、豆苗を入手する際帰宅が深夜になり店舗にて売り切れになってしまったケースが発生した。
今後も作物の生育や物流の問題によりこのようなケースが増えると予想される。
もし、このことが我々の食生活を深刻に脅かすことになっても何とか生きられるように。
検証を続けていこうと思う。

願わくばこれが、滅びた民族の遺稿とならないことを…


# 引用資料

タコピーの原罪　https://www.tbs.co.jp/anime/takopi_project/

busyoucow,「宇宙栽培試行のための発芽試験記録」Journal of SpaceFarm Vol.2 2025-1, 秘密結社オープンフォース, 2025

https://github.com/busyoucow/SpaceToumyou/

busyoucow,「宇宙栽培試行のための栽培ロボット起動及び構造物と配管組み上げ記録」
  (https://github.com/busyoucow/SpaceRobotFarmTest01) 

nanbuwks, 「栽培ロボットをインストール 1st」
https://qiita.com/nanbuwks/items/37bffef16036937eecc3 

