class Expense:
    def _init_(self, date, description, amount):
        self.date = date
        self.description = description
        self.amount = amount
class ExpenseTracker:
    def __init__(self):
        self.expenses = []
    def add_expense(self, expense):
        self.expenses.append(expense)

    def remove_expense(self, index):
        if 0<= index < len(self.expenses):
            del self.expenses[index]
            print("expense removed successfully.")
        else:
            print("Invalid expense index")

    def view_expense(self):
        if len(self.expenses) == 0:
            print("No expenses found.")
        else:
            print("Expense List:")
            for i,expense in enumerate(self.expanses, start=1):
                print(f"{i}. date: {expense.date}, Description: {expense.description}, Amount: {expense.amount:2f}")

    def total_expense(self):
        total = sum(expense.amount for expense in self.expenses)
        print(f"Total Expenses:₹{total:2f}")

def main():
    tracker = ExpenseTracker()

    while True:
        print("\nExpense tracker menu:")
        print("1: Add expense")
        print("2: remove expense")
        print("3: View Expenses")   # ✅ Fixed line
        print("4: total expenses")
        print("5: exit")


        choice = input("enter your choice (1-5):")
        if choice == "1":
            date = input("enter the date (yyy-mm-dddd):")
            description = input("enter the description:")
            amount = float(input("enter the amount:"))
            expense = Expense(date, description, amount)
            tracker.add_expense(expense)
            print("expense added successfuly.")

        elif choice == "2":
            index = int(input("enter the expense index to remove:"))-1
            tracker.remove_expense(index)
        elif choice == "3":
            tracker.view_expense()
        elif choice == "4":
            tracker.total_expense()
        elif choice == "5":
            print("goodbye")
            break
        else:
            print("invalid choice. Please try again.")

if __name__ == "__main__":
    main()