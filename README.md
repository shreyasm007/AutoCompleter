# AutoCompleter

backend/
├── app/
│   ├── main.py                # App entry point
│   │
│   ├── api/                   # API routes (HTTP only)
│   │   └── autocomplete.py
│   │
│   ├── services/              # Business logic
│   │   └── trie_service.py
│   │
│   ├── models/                # Request/Response schemas
│   │   └── autocomplete.py
│   │
│   ├── core/                  # App-wide configs
│   │   └── config.py
│   │
│   └── __init__.py
│
├── requirements.txt
└── README.md
