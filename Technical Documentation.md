# IITG Guest House Management System Technical Documentation
### Software Created by Group 2B (CS346 Jan-May 2024) <br>
Arani Rajesh Kumar (210101020) <br>
Arnav Sharan (210101021)  <br>
Arvind Kumar (210101022)  <br>
Ashish Bharti (210101023)  <br>
Atharv Jain (210101024) <br>
Avinav Yadav (210101025) <br>

## Technical Documentation

This guide provides an overview and explanation of the main parts and features of the IITG Guest House Management System. It's built with Visual C++ for the user interface and connects to MySQL to store data. Let's explore what this system can do and how it works.

##  Home Page 
1. **Namespace and Using Directives**: The code is placed within the namespace `Assignment2B` and includes several `using` directives to simplify code referencing.

2. **Form Design**: The main form (`Form1`) consists of several panels and buttons arranged to create a graphical user interface (GUI) for interacting with different functionalities of the guest house management system.

3. **Panels**: The form contains multiple panels (`panel1`, `panel2`, `panel3`, `panel4`) that are used to group related controls and organize the layout of the form.

4. **Labels**: Various labels are used to display text elements on the form, such as the name of the guest house, facilities provided, and other informational messages.

5. **Buttons**: Several buttons are provided for different functionalities, such as booking and billing, checking room availability, managing complaints, accessing transportation services, etc. Clicking on these buttons triggers events that open new forms (`Mess`, `BookedRooms`, `Housekeeping`, `Complaint`, `RoomAvailability`, `Transport`, `Signup`) for performing specific tasks.

6. **Event Handlers**: Event handlers are defined for button click events (`button1_Click`, `button2_Click`, etc.) to handle user interactions and perform appropriate actions, such as showing or hiding specific forms.

7. **Form Load Event**: The `Form1_Load` event handler is invoked when the main form is loaded, but it seems to be empty in this code.

8. **Dialog Forms**: Each button click event opens a dialog form (e.g., `Mess`, `BookedRooms`, etc.) to perform specific tasks or display relevant information. After interacting with these dialog forms, the user is returned to the main form (`Form1`).

Overall, the module represents a basic GUI application for managing various aspects of a guest house, including room booking, billing, complaints, housekeeping, and transportation services.

Certainly! Here's a more concise documentation for the provided C# code:

---

## Room Availability and Pricing

**Namespace:** HotelManagementSystem

### Constructors

- `RoomAvailability()`: Initializes a new instance of the class.

### Event Handlers

- `Button1_Click(object sender, EventArgs e)`: Applies filters for room availability.
- `button2_Click(object sender, EventArgs e)`: Navigates back to the home screen.
- `button3_Click(object sender, EventArgs e)`: Proceeds with booking process.
- `textBox3_TextChanged(object sender, EventArgs e)`: Performs dynamic filtering based on user input.
- `RoomAvailability_Load(object sender, EventArgs e)`: Initializes form on load.
- `panel2_Paint(object sender, PaintEventArgs e)`: Handles painting events for custom rendering.

### Additional Functionality

- Private methods and variables may exist for internal functionality.

---

Certainly! Here's a more descriptive summary of the provided code documentation:



## Booking and Billing

- **Description**: This class represents a form for managing bookings and billing in a guest house management system. It provides functionality for users to enter booking details such as room ID, check-in date, and check-out date, and handles the process of creating a booking and generating a bill.

- **Constructor**:
  - Initializes a new instance of the `BookingBilling` class with parameters for room ID, check-in date, and check-out date.

- **Methods**:
  - `CreateBooking()`: Handles the process of creating a booking based on the entered details.
  - `TextBox_TextChanged()`: Event handler for changes in textboxes.
  - `Button_Click()`: Event handler for button clicks.
  - `Form_Load()`: Event handler for form load event.
  - `InitializeComponent()`: Initializes all the controls on the form.

- **Controls**:
  - Textboxes: Allow users to input room ID, check-in date, check-out date, and other details.
  - Date pickers: Enable users to select check-in and check-out dates conveniently.
  - Buttons: Trigger actions such as booking creation and billing generation.
  - Panels: Provide a layout structure for organizing controls.
  - Labels: Display information and instructions to users.

- **Additional Notes**:
  - **Database Interaction**: Utilizes MySQL for database interactions, likely for storing booking and billing information.
  - **User Interface**: Implements a Windows Forms (WinForms) interface for user interaction.
  - **Incomplete Implementations**: Some event handlers and controls may lack complete implementation, requiring further development or customization based on specific requirements.

## Transport

- **Description**: This class represents a form for managing transportation bookings in a management system. It allows users to input details such as customer ID, pickup location, drop location, date, time, and vehicle type. It then checks for vehicle availability and creates bookings accordingly.

- **Constructor**:
  - Initializes a new instance of the `Transport` class.

- **Methods**:
  - `Transport_Load()`: Event handler for form load event.
  - `button1_Click()`: Event handler for the "BOOK" button click event.
  - `button3_Click()`: Event handler for the "Back to Home" button click event.

- **Controls**:
  - Labels: Display information and instructions to users.
  - Textboxes: Allow users to input customer ID, pickup location, and drop location.
  - CheckedListBox: Enable users to select time and vehicle type conveniently.
  - DateTimePicker: Allows users to select the date of the booking.
  - Buttons: Trigger actions such as booking creation and navigation.
  - Panels: Provide a layout structure for organizing controls.
  - PictureBox: Display an image for aesthetic purposes.

- **Additional Notes**:
  - **Database Interaction**: Utilizes MySQL for database interactions, likely for storing transportation booking information.
  - **User Interface**: Implements a Windows Forms (WinForms) interface for user interaction.
  - **Incomplete Implementations**: Some event handlers and controls may lack complete implementation, requiring further development or customization based on specific requirements.
  - **Validation**: Performs basic validation on user inputs, such as checking for the availability of vehicles on the selected date.

Sure, here's a concise documentation for the provided code:

---

## Mess

**Summary:**
The Mess class represents a form for managing the mess facility. It allows users to interact with various controls to opt-out of meals, view mess timings and menu, and submit requests.

**Constructor:**
- Initializes the form and its components.

**Destructor:**
- Cleans up any resources used by the form.

**Private Fields:**
- Various controls such as panels, labels, buttons, list box, text box, etc.

**Event Handlers:**
- Form load event handler
- Paint event handler
- Click event handlers for buttons and labels

**Methods:**
- Method to handle submit button click:
  - Updates the total payment for a customer based on the meals they opt-out of.

---

The provided code appears to be a C++/CLI Windows Forms application for managing complaints in a guest house management system. Here's an overview documentation of the code:

---

## Complaints 

### Components
1. **Complaint Form (`Complaint` class)**:
    - This class represents the main form of the application where users can submit complaints.
    - It includes various controls such as text boxes, labels, buttons, and a combo box for selecting the type of issue.
    - Users can input customer ID, room number, select the type of issue, and provide a description of the issue.
    - Upon submitting a complaint, the application saves the complaint details in a database and displays a confirmation message.

### Key Components
- **RichTextBoxes**: Used for inputting textual data such as customer ID, room number, and issue description.
- **ComboBox**: Allows users to select the type of issue from a predefined list.
- **Buttons**: Trigger actions such as submitting a complaint and navigating back to the home screen.
- **Database Interaction**: The application interacts with a MySQL database to store complaint details. It uses MySQL Connector/NET to establish a connection and execute SQL queries.

### Functionality
1. **Submitting Complaints**:
    - Users can enter customer ID, room number, select the type of issue, and provide a description of the issue.
    - Upon clicking the "Submit Complaint" button, the complaint details are validated and saved to the database.
    - A confirmation message is displayed to the user.

2. **Navigation**:
    - Users can navigate back to the home screen by clicking the "Back to Home" button.

## Housekeeping 

### Overview:
The Housekeeping class represents a form in a hotel management system designed to manage housekeeping tasks such as room cleaning, laundry services, and order placement for cleaning supplies. This class encapsulates various controls and event handlers to facilitate user interaction and backend processing.

### Class Structure:
- **Namespace**: The Housekeeping class resides within a specific namespace, ensuring logical organization and avoiding naming conflicts.
- **Inheritance**: The Housekeeping class may inherit from a base class if required, enabling code reuse and extending functionality.
- **Event Handlers**: The class contains event handlers for user interface (UI) events triggered by user actions such as button clicks, label clicks, and text changes.

### Components and Controls:
- **Labels**: The class includes labels to display informative text and instructions to users.
- **Panels**: Panels are used to group related controls together and provide visual organization within the form.
- **Buttons**: Buttons trigger specific actions such as closing the form, placing orders, or canceling requests.
- **Text Boxes**: Text boxes allow users to input data such as room numbers, quantities, and customer IDs.
- **Date Time Pickers**: Date time pickers enable users to select dates and times for scheduling tasks.

### Functionality:
- **Room Cleaning**: Users can request room cleaning by clicking on designated areas within the form. Upon request, cleaning staff are notified, and relevant data is stored in the system.
- **Laundry Services**: Users can request laundry services by specifying the number of items and selecting preferred options. The system calculates the total cost and updates the customer's payment information accordingly.
- **Order Placement**: Users can place orders for cleaning supplies and amenities by selecting items from a list. The system calculates the total cost based on selected items and updates the customer's payment information.

### Methods:
- **Housekeeping_Load**: This method is executed when the Housekeeping form is loaded. It typically includes initialization tasks such as setting default values and loading data from external sources.
- **Button Click Handlers**: These methods handle button click events and execute corresponding actions such as closing the form, processing room cleaning requests, placing laundry orders, and submitting supply orders.
- **Text Changed Handlers**: These methods respond to text changes in text boxes and perform validation or update calculations as necessary.

### Dependencies:
The Housekeeping class may depend on external resources such as databases, web services, or APIs to store and retrieve data related to room status, customer information, inventory, and orders. Proper error handling and exception management are essential to handle unexpected situations gracefully.

### Maintenance:
To ensure the Housekeeping class remains robust and efficient, periodic maintenance may be required to address bugs, implement new features, and optimize performance. Regular testing and feedback collection from users can help identify areas for improvement and prioritize development efforts accordingly.

---
