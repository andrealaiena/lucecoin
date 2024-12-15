<h1 align="center">
<img src="https://static.tumblr.com/ppdj5y9/Ae9mxmxtp/300coin.png" alt="lucecoin" width="300"/>
<br/><br/>
lucecoin Core [LUCE, Ł]  
</h1>

<div align="center">

[![lucecoinBadge](https://img.shields.io/badge/LUCE-Coin-yellow.svg)](https://lucecoin.com)
[![MuchWow](https://img.shields.io/badge/Much-Wow-yellow.svg)](https://lucecoin.com)

</div>

IMPORTANT : À partir d'août 2024, la branche master est devenue la branche principale d'intégration et est devenue instable. Veuillez consulter une version _taguée_ avant de compiler des binaires de production

lucecoin est une crypto-monnaie communautaire qui s'inspire d'un mème de Shiba Inu. Le logiciel lucecoin Core permet à quiconque d'exploiter un nœud dans les réseaux de la blockchain lucecoin et utilise la méthode de hachage Scrypt pour la preuve de travail. Il est adapté de Bitcoin Core et d'autres crypto-monnaies.

Pour plus d'informations sur les frais par défaut utilisés sur le réseau lucecoin, veuillez consulter la [recommandation sur les frais](doc/fee-recommendation.md).

**Site web:** [lucecoin.com](https://lucecoin.com)

## Utilisation 💻

Pour commencer votre voyage avec lucecoin Core, consultez le [guide d'installation](INSTALL.md) et le [tutoriel de démarrage](doc/getting-started.md).

L'API JSON-RPC fournie par lucecoin Core est auto-documentée et peut être parcourue avec `lucecoin-cli help`, tandis que des informations détaillées pour chaque commande peuvent être visualisées avec `lucecoin-cli help <command>`. Vous pouvez également consulter la [documentation Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) - qui implémente un protocole similaire - pour obtenir une version consultable.

### Les ports

lucecoin Core utilise par défaut le port `22556` pour la communication pair-à-pair qui est nécessaire pour synchroniser la blockchain au "mainnet" et rester informé des nouvelles transactions et blocs. De plus, un port JSONRPC peut être ouvert, dont par défaut le port `22555` est utilisé pour les nœuds du réseau principal. Il est fortement recommandé de ne pas exposer les ports RPC à l'Internet public.

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   22556 |   44556 |   18444 |
| RPC      |   22555 |   44555 |   18332 |

## Développement continu - Moon plan 🌒

lucecoin Core est un logiciel libre et communautaire. Le processus de développement est ouvert et publiquement visible; tout le monde peut voir, discuter et travailler sur le logiciel.

Principales ressources de développement :

* [GitHub Projects](https://github.com/lucecoin/lucecoin/projects) est utilisé pour
  suivre les travaux prévus et en cours pour les prochaines versions.

* [GitHub Discussion](https://github.com/lucecoin/lucecoin/discussions) est utilisé pour
  discuter des caractéristiques, planifiées et non planifiées, liées à la fois au développement du logiciel lucecoin Core, les protocoles sous-jacents et l'actif LUCE.

* [lucecoindev subreddit](https://www.reddit.com/r/lucecoindev/)

### Stratégie de version

Les numéros de version suivent la sémantique ```major.minor.patch```.

### Branches

Il y a 4 types de branches dans ce répertoire :

- **master :** Instable, contient le code le plus récent en développement.
- **maintenance :** Stable, contient la dernière version des versions précédentes, qui sont toujours en maintenance active. Format : ```<version>-maint```
- **development :** Instable, contient du nouveau code pour les versions prévues. Format : ```<version>-dev``` 
- **archive :** Stable, branches immuables d'anciennes versions qui ne sont plus maintenues.

***Veuillez soumettre vos demandes de tirage contre la branche `master`.***

*Les branches `master` et `maintenance` sont exclusivement mutables par version. Lorsqu'une version est planifiée, une branche de développement est créée et les commits de `master` sont sélectionnés et intégrés par les mainteneurs.*

## Contribution🤝

Si vous trouvez un bug ou rencontrez des problèmes avec ce logiciel, veuillez le signaler en utilisant le [système de gestion des problèmes](https://github.com/lucecoin/lucecoin/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Veuillez consulter [le guide de contribution](CONTRIBUTING.md) pour voir comment vous pouvez
participer au développement de lucecoin Core. Il y a souvent
[des sujets demandant de l'aide](https://github.com/lucecoin/lucecoin/labels/help%20wanted)
où vos contributions auront un impact considérable et seront très appréciées. wow.

## Communautés 🚀🍾

Vous pouvez rejoindre les communautés sur différents réseaux sociaux.
Pour voir ce qu'il se passe, rencontrer des gens et discuter, trouver le dernier mème, apprendre sur le lucecoin, donner ou demander de l'aide, pour partager votre projet.

Voici quelques endroits à visiter :

* [lucecoin subreddit](https://www.reddit.com/r/lucecoin/)
* [LUCEducation subreddit](https://www.reddit.com/r/LUCEducation/)
* [Discord](https://discord.gg/lucecoin)
* [lucecoin Twitter](https://twitter.com/lucecoin)

## Questions très fréquemment posées ❓

Vous avez une question concernant le lucecoin ? Une réponse se trouve peut-être déjà dans la
[FAQ](doc/FAQ.md) ou dans la
[section Q&R](https://github.com/lucecoin/lucecoin/discussions/categories/q-a)
du forum de discussion !

## License - Much license ⚖️
lucecoin Core est publié sous les termes de la licence MIT. Voir
[COPYING](COPYING) pour plus d'informations ou voir
[opensource.org](https://opensource.org/licenses/MIT)
