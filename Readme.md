
pierre;: Architecture plus quelques components
mathieu: le reste des components



class Circuit (range le .nts)  herite de icomponent ?
   - liste de icomponent

class parser : pour chaque .nts crée un circuit
fonction de parsing plus contient la liste de circuit (1 seule circuit si un .nts)
et sert de factory pour les icomponent a crée durant le parsing :exemple un string parser donnant 4081 dans le .nts devient object icomponent correspondant.


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