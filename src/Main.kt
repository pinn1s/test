import java.awt.Font
import java.io.File
import javax.swing.JButton
import javax.swing.JFrame
import javax.swing.JLabel
import javax.swing.JPanel

fun main() {
    // Load the custom font from your project folder
    val fontFile = File("rsc/font/Manrope.ttf")
    val baseFont = Font.createFont(Font.TRUETYPE_FONT, fontFile).deriveFont(16f) // 16pt font size

    // create window
    val frame = JFrame("My First Kotlin GUI")
    frame.setSize(300, 200)
    frame.defaultCloseOperation = JFrame.EXIT_ON_CLOSE

    val panel = JPanel()
    val label = JLabel("click this button for free robux")
    val button = JButton("click")

    // Apply custom font to label and button
    label.font = baseFont
    button.font = baseFont

    button.addActionListener {
        label.text = "btw there's no robux nor virus"
    }

    panel.add(label)
    panel.add(button)
    frame.add(panel)

    // show window
    frame.isVisible = true
}
