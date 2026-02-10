
pierre;: Architecture plus quelques components
mathieu: le reste des components



class Circuit (range le .nts)
   - liste de icomponent

class parser : pour chaque .nts crée un circuit
fonction de parsing, contient la liste de circuit (1 seul circuit si un .nts)

class Factory : crée les IComponent à partir d'un string
   - std::unique_ptr<nts::IComponent> createComponent(const std::string &type);
   - en interne : une map<string, function> qui associe un type à un lambda de création
   - exemple : {"4081", []() { return std::make_unique<C4081>(); }}
   - le parser appelle factory.createComponent("4081") pour instancier les composants


IComponent (interface)
│   → les méthodes à implémenter
│      compute(), setLink(), simulate()
│
│
└── AComponent (classe abstraite)
      → stocke les _links (commun à toutes les puces)
      → implémente setLink() une seule fois
      │
      ├── C4081
      │     → compute() fait AND
      │
      ├── C4071modules
      │     → compute() fait OR
      │
      └── C4069
            → compute() fait NOT

            et Input :  renvoie la valeur donnée par l'utilisateur
            et Output : compute() demande la valeur à son lien


Arborescence des dossiers :

include/
├── IComponent/
│     └── IComponent.hpp
├── AComponent/
│     └── AComponent.hpp
├── Components/
│     ├── C4081.hpp
│     ├── C4071.hpp
│     ├── C4069.hpp
│     ├── Input.hpp
│     ├── Output.hpp
│     ├── Clock.hpp
│     ├── True.hpp
│     └── False.hpp
├── Circuit/
│     └── Circuit.hpp
├── Parser/
│     └── Parser.hpp
└── Factory/
      └── Factory.hpp

src/
├── AComponent/
│     └── AComponent.cpp
├── Components/
│     ├── C4081.cpp
│     ├── C4071.cpp
│     ├── C4069.cpp
│     ├── Input.cpp
│     ├── Output.cpp
│     ├── Clock.cpp
│     ├── True.cpp
│     └── False.cpp
├── Circuit/
│     └── Circuit.cpp
├── Parser/
│     └── Parser.cpp
└── Factory/
      └── Factory.cpp

main.cpp
Makefile