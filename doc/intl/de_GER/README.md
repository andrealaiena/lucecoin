<h1 align="center">
<img src="https://static.tumblr.com/ppdj5y9/Ae9mxmxtp/300coin.png" alt="lucecoin" width="300"/>
<br/><br/>
lucecoin Core [LUCE, Ł]  
</h1>

<div align="center">

[![lucecoinBadge](https://img.shields.io/badge/LUCE-Coin-yellow.svg)](https://lucecoin.com)
[![MuchWow](https://img.shields.io/badge/Much-Wow-yellow.svg)](https://lucecoin.com)

</div>

**WICHTIG: Seit August 2024 ist der `master` Branch die primäre Integrationsverzweigung geworden und daher Instabil.
Bevor Sie die Binärdateien selbst kompilieren, überprüfen Sie bitte, ob eine getaggte Version für Ihr Betriebssystem verfügbar ist.
 
Eine internationale Dokumentation finden Sie unter [doc/intl](doc/intl/README.md).
 
lucecoin ist eine als Gemeinschaftsprojekt betriebene Kryptowährung, die von einem Shiba-Inu-Meme inspiriert wurde.
Die lucecoin-Core-Software ermöglicht es Jedem, einen Knotenpunkt, (sog. "Nodes") im lucecoin-Blockchain-Netzwerk zu betreiben.
lucecoin verwendet das Scrypt-Hashing-Verfahren für "Proof of Work" und wurde von Bitcoin Core und anderen Kryptowährungen adaptiert.
 
Informationen über anfallende Standard-Transaktionsgebühren auf dem lucecoin-Netzwerk finden Sie unter [Transaktionsgebühren](doc/fee-recommendation.md).

**Website:** [lucecoin.com](https://lucecoin.com)
 
## Verwendung 💻
 
Um lucecoin Core zu verwenden, sehen Sie sich Bitte die [Installations-Anleitung](INSTALL.md) und das [Einstiegstutorial](doc/getting-started.md) an.
 
Die in lucecoin Core enthaltene JSON-RPC-API ist selbstdokumentiert und kann mit dem Befehl `lucecoin-cli help` eingesehen werden. Detailliertere Informationen zu jedem Befehl finden Sie unter `lucecoin-cli help <command>`. Alternativ können Sie sich die [Bitcoin Core-Dokumentation](https://developer.bitcoin.org/reference/rpc/) ansehen, die ein ähnliches Protokoll implementiert hat, um eine navigierbare Version zu erhalten.
 
### Viele Ports

lucecoin Core verwendet den Port `22556` als Standart-Port zur Kommunikation
mit dem Peer-to-Peer Netzwerk und um die "Mainnet" Blockchain zu synchronisieren.
Dies ist notwendig um über neue Transaktionen und Blöcke informiert zu bleiben.
Zusätzlich kann ein JSON-RPC-Port geöffnet werden, welcher den Port `22555` als Standart-Port für Mainnet-Nodes verwendet.

**Es wird STRENGSTENS davon abgeraten, RPC-Ports im öffentlichen Internet sichtbar zu machen!**

| Funktion | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   22556 |   44556 |   18444 |
| RPC      |   22555 |   44555 |   18332 |

## Laufende Entwicklungen - Fahrplan zum Mond 🌒

lucecoin Core ist eine Open-Source-Software und wird von der Community entwickelt.
Der Entwicklungsprozess ist transparent und öffentlich einsehbar; jeder kann ihn sehen, darüber diskutieren und daran teilhaben!

Die wichtigsten Entwicklungsressourcen:

* [GitHub Projekte](https://github.com/lucecoin/lucecoin/projects) 
  Wird verwendet, um den bereits geplanten und derzeit in Entwicklung befindlichen Releases zu folgen.
* [GitHub Diskussionen](https://github.com/lucecoin/lucecoin/discussions)
  Wird verwendet, um geplante und ungeplante Funktionen (Features) zu diskutieren, die sich auf die Entwicklung der lucecoin Core-Software, die zugrunde liegenden Protokolle und das LUCE-Asset beziehen.
* [lucecoindev subreddit](https://www.reddit.com/r/lucecoindev/)

### Versionsstrategie

Die Vergabe der Versionsnummern erfolgt nach dem Prinzip von ```major.minor.patch```.

### Branches
Es gibt 4 Arten von sog. "Branches" (Unterverzweigungen) in diesem Repository:

- **master:** Instabil - Enthält den neuesten Code, der sich derzeit in der Entwicklung befindet.
- **maintenance:** Stabil, enthält die neueste Version früherer Versionen, die noch aktiv gewartet werden. Format: ```<version>-maint```
- **development:** Instabil, enthält neuen Code für kommende Versionen. Format: ```<version>-dev```
- **archive:** Stabile, unveränderliche Branches für alte Versionen, die sich nicht mehr ändern, weil sie nicht mehr gepflegt werden.

***Reichen Sie Ihre Pull-Requests im `master`-Branch ein!***

* Die Wartungs-Branches sind ausschließlich durch Freigabe veränderbar. Wenn eine Veröffentlichung geplant ist, wird ein Entwicklungs-Branch erstellt und die Beitrage ("Commits") werden von den Betreuern aus dem Master-Branch ausgewählt.

## Beitragen 🤝
 
Falls Sie einen Fehler oder Probleme beim Verwenden dieser Software finden, melden Sie diese über das vorhandene [Ticket System](https://github.com/lucecoin/lucecoin/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).
 
Wenn Sie an der Mithilfe oder der Entwicklung von lucecoin Core interessiert sind, sehen Sie sich bitte den [Beitragsleitfaden](CONTRIBUTING.md) an.
Oft gibt es Themen, die [Hilfe](https://github.com/lucecoin/lucecoin/labels/help%20wanted) benötigen. Ihr Beitrag könnte einen hohen Stellenwert haben und wird daher auch sehr geschätzt.
 
## Communities 🚀🍾
 
Sie können den Communities auf verschiedenen sozialen Medien beitreten.
Herzlich sind Sie eingeladen sich umzusehen um neue Leute kennenzulernen, die neuesten Memes zu teilen, um Hilfe anzubieten oder auch zu erhalten und an Diskussionen teilzuhaben.
Vielleicht findet sich ja auch jemand, der Ihnen bei Ihren Projekten behilflich sein kann.
 
Hier sind einige informative Links, die Sie interessieren könnten:
 
* [lucecoin subreddit](https://www.reddit.com/r/lucecoin/)
* [LUCEducation subreddit](https://www.reddit.com/r/LUCEducation/)
* [Discord](https://discord.gg/lucecoin)
* [lucecoin Twitter](https://twitter.com/lucecoin) 
 
## Oftmals gestellte Fragen: ❓
 
Haben Sie eine Frage zu lucecoin? Eine Antwort könnte vielleicht bereits in der [FAQ](doc/FAQ.md) oder im
[Q&A](https://github.com/lucecoin/lucecoin/discussions/categories/q-a) hier auf Github vorhanden sein!
 
## Lizenz ⚖️
 
lucecoin Core wird unter den Bedingungen der MIT-Lizenz veröffentlicht.
Siehe: [COPYING](COPYING) für mehr Informationen oder informiere Dich bei [opensource.org](https://opensource.org/licenses/MIT).
