# CHATMESSAGEHISTORYMANAGER
# Chat Message History Manager

This project is a simple Chat Message History Manager implemented in C++. It allows users to add chat messages, view message history, search messages by keyword, delete messages, and exit the application through a menu-driven interface.

## Features

- **Add Message:** Enter and save a new chat message.
- **View History:** Display all saved chat messages.
- **Search Message:** Find messages containing a specific keyword.
- **Delete Message:** Remove a message by its number.
- **Exit:** Quit the application.

## Project Structure

```
chat-message-history-manager
├── Untitled-3          # Source code (main.cpp)
├── Makefile            # Build rules for compiling the project
└── README.md           # Documentation for the project
```

## Building the Project

To build the project, navigate to the project directory and run:

```
make
```

Or, compile manually:

```
g++ Untitled-3 -o chat-message-history-manager.exe
```

## Running the Application

After building the project, run:

```
chat-message-history-manager.exe
```

## Sample Output

```
Chat Message History Manager
1. Add Message
2. View History
3. Search Message
4. Delete Message
5. Exit
Choose: 1
Enter message: Hello, how are you?
Message added.

Choose: 1
Enter message: I'm fine, thanks!
Message added.

Choose: 2

Message History:
1. Hello, how are you?
2. I'm fine, thanks!

Choose: 3
Enter keyword to search: fine
Found: 2. I'm fine, thanks!

Choose: 4
Enter message number to delete: 1
Message deleted.

Choose: 2

Message History:
1. I'm fine, thanks!

Choose: 5
```

## License

This project is open-source and available for modification and distribution.
